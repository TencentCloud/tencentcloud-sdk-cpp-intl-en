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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDEFAULTDISTRIBUTIONCONFIGREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDEFAULTDISTRIBUTIONCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeDefaultDistributionConfig request structure.
                */
                class DescribeDefaultDistributionConfigRequest : public AbstractModel
                {
                public:
                    DescribeDefaultDistributionConfigRequest();
                    ~DescribeDefaultDistributionConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * @return SubAppId <b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * @param _subAppId <b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * <b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDEFAULTDISTRIBUTIONCONFIGREQUEST_H_
