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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERCLBWAFREGIONSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERCLBWAFREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ClbWafRegionItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeUserClbWafRegions response structure.
                */
                class DescribeUserClbWafRegionsResponse : public AbstractModel
                {
                public:
                    DescribeUserClbWafRegionsResponse();
                    ~DescribeUserClbWafRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Region (in standard ap-format) list

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data Region (in standard ap-format) list

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Geographical information with detailed attributes

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RichDatas Geographical information with detailed attributes

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClbWafRegionItem> GetRichDatas() const;

                    /**
                     * 判断参数 RichDatas 是否已赋值
                     * @return RichDatas 是否已赋值
                     * 
                     */
                    bool RichDatasHasBeenSet() const;

                private:

                    /**
                     * Region (in standard ap-format) list

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Geographical information with detailed attributes

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ClbWafRegionItem> m_richDatas;
                    bool m_richDatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEUSERCLBWAFREGIONSRESPONSE_H_
