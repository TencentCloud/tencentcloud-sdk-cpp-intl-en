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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSACCESSPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSACCESSPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCosAccessPermission request structure.
                */
                class DescribeCosAccessPermissionRequest : public AbstractModel
                {
                public:
                    DescribeCosAccessPermissionRequest();
                    ~DescribeCosAccessPermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Associated appid
                     * @return RelAppId Associated appid
                     * 
                     */
                    int64_t GetRelAppId() const;

                    /**
                     * 设置Associated appid
                     * @param _relAppId Associated appid
                     * 
                     */
                    void SetRelAppId(const int64_t& _relAppId);

                    /**
                     * 判断参数 RelAppId 是否已赋值
                     * @return RelAppId 是否已赋值
                     * 
                     */
                    bool RelAppIdHasBeenSet() const;

                    /**
                     * 获取Bucket name
                     * @return BucketName Bucket name
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置Bucket name
                     * @param _bucketName Bucket name
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取uin to view
                     * @return RelUin uin to view
                     * 
                     */
                    std::string GetRelUin() const;

                    /**
                     * 设置uin to view
                     * @param _relUin uin to view
                     * 
                     */
                    void SetRelUin(const std::string& _relUin);

                    /**
                     * 判断参数 RelUin 是否已赋值
                     * @return RelUin 是否已赋值
                     * 
                     */
                    bool RelUinHasBeenSet() const;

                    /**
                     * 获取Filter.
                     * @return Filter Filter.
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置Filter.
                     * @param _filter Filter.
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * Associated appid
                     */
                    int64_t m_relAppId;
                    bool m_relAppIdHasBeenSet;

                    /**
                     * Bucket name
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * uin to view
                     */
                    std::string m_relUin;
                    bool m_relUinHasBeenSet;

                    /**
                     * Filter.
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOSACCESSPERMISSIONREQUEST_H_
