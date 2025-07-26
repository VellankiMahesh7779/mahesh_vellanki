#!/bin/bash

##############################
#author: mahesh
#date:25july

#This Script will shows the usage of aws resource
REPORT_FILE="/tmp/aws_report_$(date +%F_%H-%M).txt"
{
set -x
###########

#Aws s3
#Aws ec2
#Aws Lambda
#Aws IAM Users

echo "information of s3 buckets"
#list of s3 buckets
aws s3 ls

echo "information of ec2 buckets"
#list of ec2 instance
aws ec2 describe-instances

echo "information of lambda"
#list of Lambda 
aws lambda list-functions

echo "information of IAM Users"
#list of IAM users
aws iam list-users

} > "$REPORT_FILE" 2>&1

# Send the report by mail
mail -s "AWS Resources Report - $(date +%F)" mahivellanki557@gmail.com < "$REPORT_FILE"
