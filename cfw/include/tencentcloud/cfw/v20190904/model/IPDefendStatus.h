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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IPDEFENDSTATUS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IPDEFENDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * IP protection status
                */
                class IPDefendStatus : public AbstractModel
                {
                public:
                    IPDefendStatus();
                    ~IPDefendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address
                     * @return IP IP address
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP address
                     * @param _iP IP address
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Protection status. 1: enabled; -1: incorrect address; others: disabled
                     * @return Status Protection status. 1: enabled; -1: incorrect address; others: disabled
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Protection status. 1: enabled; -1: incorrect address; others: disabled
                     * @param _status Protection status. 1: enabled; -1: incorrect address; others: disabled
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * IP address
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Protection status. 1: enabled; -1: incorrect address; others: disabled
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IPDEFENDSTATUS_H_
