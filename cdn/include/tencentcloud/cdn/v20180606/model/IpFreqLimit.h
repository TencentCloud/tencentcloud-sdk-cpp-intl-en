/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IPFREQLIMIT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IPFREQLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Access limit configuration for a single IP of a single node. This is disabled by default.
                */
                class IpFreqLimit : public AbstractModel
                {
                public:
                    IpFreqLimit();
                    ~IpFreqLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable IP rate limit. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable IP rate limit. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable IP rate limit. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable IP rate limit. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Sets the limited number of requests per second
514 will be returned for requests that exceed the limit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Qps Sets the limited number of requests per second
514 will be returned for requests that exceed the limit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置Sets the limited number of requests per second
514 will be returned for requests that exceed the limit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _qps Sets the limited number of requests per second
514 will be returned for requests that exceed the limit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                private:

                    /**
                     * Whether to enable IP rate limit. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Sets the limited number of requests per second
514 will be returned for requests that exceed the limit
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IPFREQLIMIT_H_
