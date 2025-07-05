/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDosageCosDetailByDate request structure.
                */
                class DescribeDosageCosDetailByDateRequest : public AbstractModel
                {
                public:
                    DescribeDosageCosDetailByDateRequest();
                    ~DescribeDosageCosDetailByDateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start date of the usage query, such as `2020-09-01`.
                     * @return StartDate The start date of the usage query, such as `2020-09-01`.
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置The start date of the usage query, such as `2020-09-01`.
                     * @param _startDate The start date of the usage query, such as `2020-09-01`.
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取The end date of the usage query (end date must be in the same month as the start date), such as `2020-09-30`.
                     * @return EndDate The end date of the usage query (end date must be in the same month as the start date), such as `2020-09-30`.
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置The end date of the usage query (end date must be in the same month as the start date), such as `2020-09-30`.
                     * @param _endDate The end date of the usage query (end date must be in the same month as the start date), such as `2020-09-30`.
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Bucket name. You can use `Get Service` to query the list of all buckets under a requester account. For details, see [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291).
                     * @return BucketName Bucket name. You can use `Get Service` to query the list of all buckets under a requester account. For details, see [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291).
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket name. You can use `Get Service` to query the list of all buckets under a requester account. For details, see [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291).
                     * @param _bucketName Bucket name. You can use `Get Service` to query the list of all buckets under a requester account. For details, see [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291).
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                private:

                    /**
                     * The start date of the usage query, such as `2020-09-01`.
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * The end date of the usage query (end date must be in the same month as the start date), such as `2020-09-30`.
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Bucket name. You can use `Get Service` to query the list of all buckets under a requester account. For details, see [GET Service (List Buckets)](https://www.tencentcloud.com/document/product/436/8291).
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATEREQUEST_H_
