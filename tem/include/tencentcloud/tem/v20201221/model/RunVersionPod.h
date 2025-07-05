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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_RUNVERSIONPOD_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_RUNVERSIONPOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Pod
                */
                class RunVersionPod : public AbstractModel
                {
                public:
                    RunVersionPod();
                    ~RunVersionPod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shell address
                     * @return Webshell Shell address
                     * 
                     */
                    std::string GetWebshell() const;

                    /**
                     * 设置Shell address
                     * @param _webshell Shell address
                     * 
                     */
                    void SetWebshell(const std::string& _webshell);

                    /**
                     * 判断参数 Webshell 是否已赋值
                     * @return Webshell 是否已赋值
                     * 
                     */
                    bool WebshellHasBeenSet() const;

                    /**
                     * 获取Pod ID
                     * @return PodId Pod ID
                     * 
                     */
                    std::string GetPodId() const;

                    /**
                     * 设置Pod ID
                     * @param _podId Pod ID
                     * 
                     */
                    void SetPodId(const std::string& _podId);

                    /**
                     * 判断参数 PodId 是否已赋值
                     * @return PodId 是否已赋值
                     * 
                     */
                    bool PodIdHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Pod IP.
                     * @return PodIp Pod IP.
                     * 
                     */
                    std::string GetPodIp() const;

                    /**
                     * 设置Pod IP.
                     * @param _podIp Pod IP.
                     * 
                     */
                    void SetPodIp(const std::string& _podIp);

                    /**
                     * 判断参数 PodIp 是否已赋值
                     * @return PodIp 是否已赋值
                     * 
                     */
                    bool PodIpHasBeenSet() const;

                    /**
                     * 获取Availability zone.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Zone Availability zone.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _zone Availability zone.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Deployed version.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return DeployVersion Deployed version.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置Deployed version.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _deployVersion Deployed version.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

                    /**
                     * 获取Number of Restarts
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * @return RestartCount Number of Restarts
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRestartCount() const;

                    /**
                     * 设置Number of Restarts
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * @param _restartCount Number of Restarts
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRestartCount(const int64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                private:

                    /**
                     * Shell address
                     */
                    std::string m_webshell;
                    bool m_webshellHasBeenSet;

                    /**
                     * Pod ID
                     */
                    std::string m_podId;
                    bool m_podIdHasBeenSet;

                    /**
                     * Status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Pod IP.
                     */
                    std::string m_podIp;
                    bool m_podIpHasBeenSet;

                    /**
                     * Availability zone.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Deployed version.
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * Number of Restarts
Note: This is field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_RUNVERSIONPOD_H_
