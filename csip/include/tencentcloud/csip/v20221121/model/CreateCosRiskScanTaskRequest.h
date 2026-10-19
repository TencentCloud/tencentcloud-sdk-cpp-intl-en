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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSRISKSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSRISKSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosBucketInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateCosRiskScanTask request structure.
                */
                class CreateCosRiskScanTaskRequest : public AbstractModel
                {
                public:
                    CreateCosRiskScanTaskRequest();
                    ~CreateCosRiskScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Bucket list to scan
                     * @return BucketNameSet Bucket list to scan
                     * 
                     */
                    std::vector<CosBucketInfo> GetBucketNameSet() const;

                    /**
                     * 设置Bucket list to scan
                     * @param _bucketNameSet Bucket list to scan
                     * 
                     */
                    void SetBucketNameSet(const std::vector<CosBucketInfo>& _bucketNameSet);

                    /**
                     * 判断参数 BucketNameSet 是否已赋值
                     * @return BucketNameSet 是否已赋值
                     * 
                     */
                    bool BucketNameSetHasBeenSet() const;

                    /**
                     * 获取Whether to scan all buckets
                     * @return IsScanAllBucket Whether to scan all buckets
                     * 
                     */
                    bool GetIsScanAllBucket() const;

                    /**
                     * 设置Whether to scan all buckets
                     * @param _isScanAllBucket Whether to scan all buckets
                     * 
                     */
                    void SetIsScanAllBucket(const bool& _isScanAllBucket);

                    /**
                     * 判断参数 IsScanAllBucket 是否已赋值
                     * @return IsScanAllBucket 是否已赋值
                     * 
                     */
                    bool IsScanAllBucketHasBeenSet() const;

                private:

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Bucket list to scan
                     */
                    std::vector<CosBucketInfo> m_bucketNameSet;
                    bool m_bucketNameSetHasBeenSet;

                    /**
                     * Whether to scan all buckets
                     */
                    bool m_isScanAllBucket;
                    bool m_isScanAllBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECOSRISKSCANTASKREQUEST_H_
