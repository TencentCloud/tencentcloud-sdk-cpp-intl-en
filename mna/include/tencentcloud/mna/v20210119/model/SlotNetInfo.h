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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_SLOTNETINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_SLOTNETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * NIC traffic metric data
                */
                class SlotNetInfo : public AbstractModel
                {
                public:
                    SlotNetInfo();
                    ~SlotNetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NIC Name
                     * @return NetInfoName NIC Name
                     * 
                     */
                    std::string GetNetInfoName() const;

                    /**
                     * 设置NIC Name
                     * @param _netInfoName NIC Name
                     * 
                     */
                    void SetNetInfoName(const std::string& _netInfoName);

                    /**
                     * 判断参数 NetInfoName 是否已赋值
                     * @return NetInfoName 是否已赋值
                     * 
                     */
                    bool NetInfoNameHasBeenSet() const;

                    /**
                     * 获取Public IP address
                     * @return PublicIP Public IP address
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP address
                     * @param _publicIP Public IP address
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取Metric data (bps/ms/%)
                     * @return Current Metric data (bps/ms/%)
                     * 
                     */
                    double GetCurrent() const;

                    /**
                     * 设置Metric data (bps/ms/%)
                     * @param _current Metric data (bps/ms/%)
                     * 
                     */
                    void SetCurrent(const double& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                private:

                    /**
                     * NIC Name
                     */
                    std::string m_netInfoName;
                    bool m_netInfoNameHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * Metric data (bps/ms/%)
                     */
                    double m_current;
                    bool m_currentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_SLOTNETINFO_H_
