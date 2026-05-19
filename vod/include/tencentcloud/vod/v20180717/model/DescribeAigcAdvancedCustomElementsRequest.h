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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCADVANCEDCUSTOMELEMENTSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCADVANCEDCUSTOMELEMENTSREQUEST_H_

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
                * DescribeAigcAdvancedCustomElements request structure.
                */
                class DescribeAigcAdvancedCustomElementsRequest : public AbstractModel
                {
                public:
                    DescribeAigcAdvancedCustomElementsRequest();
                    ~DescribeAigcAdvancedCustomElementsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>Starting offset amount for pagination return. Returns entries from Offset to Offset+Limit-1.</p><p>Default value: 0</p><p>Offset must be a multiple of Limit.</p>
                     * @return Offset <p>Starting offset amount for pagination return. Returns entries from Offset to Offset+Limit-1.</p><p>Default value: 0</p><p>Offset must be a multiple of Limit.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Starting offset amount for pagination return. Returns entries from Offset to Offset+Limit-1.</p><p>Default value: 0</p><p>Offset must be a multiple of Limit.</p>
                     * @param _offset <p>Starting offset amount for pagination return. Returns entries from Offset to Offset+Limit-1.</p><p>Default value: 0</p><p>Offset must be a multiple of Limit.</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of records returned in pages.</p><p>Value ranges from 1 to 300.</p><p>Default value: 10.</p><p>Offset must be a multiple of Limit.</p>
                     * @return Limit <p>Number of records returned in pages.</p><p>Value ranges from 1 to 300.</p><p>Default value: 10.</p><p>Offset must be a multiple of Limit.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of records returned in pages.</p><p>Value ranges from 1 to 300.</p><p>Default value: 10.</p><p>Offset must be a multiple of Limit.</p>
                     * @param _limit <p>Number of records returned in pages.</p><p>Value ranges from 1 to 300.</p><p>Default value: 10.</p><p>Offset must be a multiple of Limit.</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services from December 25, 2023, this field must be filled with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Starting offset amount for pagination return. Returns entries from Offset to Offset+Limit-1.</p><p>Default value: 0</p><p>Offset must be a multiple of Limit.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of records returned in pages.</p><p>Value ranges from 1 to 300.</p><p>Default value: 10.</p><p>Offset must be a multiple of Limit.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCADVANCEDCUSTOMELEMENTSREQUEST_H_
