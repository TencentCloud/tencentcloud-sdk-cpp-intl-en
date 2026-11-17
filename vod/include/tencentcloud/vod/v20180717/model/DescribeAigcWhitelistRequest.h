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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCWHITELISTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCWHITELISTREQUEST_H_

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
                * DescribeAigcWhitelist request structure.
                */
                class DescribeAigcWhitelistRequest : public AbstractModel
                {
                public:
                    DescribeAigcWhitelistRequest();
                    ~DescribeAigcWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * @return AigcType <p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * 
                     */
                    std::string GetAigcType() const;

                    /**
                     * 设置<p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * @param _aigcType <p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     * 
                     */
                    void SetAigcType(const std::string& _aigcType);

                    /**
                     * 判断参数 AigcType 是否已赋值
                     * @return AigcType 是否已赋值
                     * 
                     */
                    bool AigcTypeHasBeenSet() const;

                private:

                    /**
                     * <p><b>VOD <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate VOD after December 25, 2023, this field must be set to the application ID when accessing resources in a VOD application (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>AIGC task type</p><p>Valid values:</p><ul><li>Image: AIGC image generation task</li><li>Video: AIGC video generation task</li></ul>
                     */
                    std::string m_aigcType;
                    bool m_aigcTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCWHITELISTREQUEST_H_
