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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_HOSTALIAS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_HOSTALIAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Domain configuration of the pressure machine.
                */
                class HostAlias : public AbstractModel
                {
                public:
                    HostAlias();
                    ~HostAlias() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain list to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * @return HostNames Domain list to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<std::string> GetHostNames() const;

                    /**
                     * 设置Domain list to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * @param _hostNames Domain list to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetHostNames(const std::vector<std::string>& _hostNames);

                    /**
                     * 判断参数 HostNames 是否已赋值
                     * @return HostNames 是否已赋值
                     * 
                     */
                    bool HostNamesHasBeenSet() const;

                    /**
                     * 获取IP address to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * @return IP IP address to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP address to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * @param _iP IP address to be bound.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                private:

                    /**
                     * Domain list to be bound.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<std::string> m_hostNames;
                    bool m_hostNamesHasBeenSet;

                    /**
                     * IP address to be bound.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_HOSTALIAS_H_
