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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Information of the server with exploit prevention enabled
                */
                class VulDefenceHost : public AbstractModel
                {
                public:
                    VulDefenceHost();
                    ~VulDefenceHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Server name
                     * @return HostName Server name
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Server name
                     * @param HostName Server name
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server IP, which is the private IP
                     * @return HostIP Server IP, which is the private IP
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置Server IP, which is the private IP
                     * @param HostIP Server IP, which is the private IP
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Server QUuid
                     * @return HostID Server QUuid
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置Server QUuid
                     * @param HostID Server QUuid
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     * @return Status Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     * @param Status Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIP Public IP
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置Public IP
                     * @param PublicIP Public IP
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取First enablement time
                     * @return CreateTime First enablement time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First enablement time
                     * @param CreateTime First enablement time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return ModifyTime Update time
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
                     * @param ModifyTime Update time
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Server name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server IP, which is the private IP
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Server QUuid
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * Plugin status. Valid values: `SUCCESS` (normal); `FAIL` (abnormal); `NO_DEFENDED` (not defended).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * First enablement time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_
