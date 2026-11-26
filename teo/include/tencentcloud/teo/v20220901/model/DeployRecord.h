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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYRECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupVersionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of configuration group version release notes.
                */
                class DeployRecord : public AbstractModel
                {
                public:
                    DeployRecord();
                    ~DeployRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Detailed information of the released version.
                     * @return ConfigGroupVersionInfos Detailed information of the released version.
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetConfigGroupVersionInfos() const;

                    /**
                     * 设置Detailed information of the released version.
                     * @param _configGroupVersionInfos Detailed information of the released version.
                     * 
                     */
                    void SetConfigGroupVersionInfos(const std::vector<ConfigGroupVersionInfo>& _configGroupVersionInfos);

                    /**
                     * 判断参数 ConfigGroupVersionInfos 是否已赋值
                     * @return ConfigGroupVersionInfos 是否已赋值
                     * 
                     */
                    bool ConfigGroupVersionInfosHasBeenSet() const;

                    /**
                     * 获取Release time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @return DeployTime Release time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置Release time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * @param _deployTime Release time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取Publishing status. Valid values:
<li> deploying: Releasing;</li>
<li>failure: release failure;</li>
<li>success: Published successfully.</li>
                     * @return Status Publishing status. Valid values:
<li> deploying: Releasing;</li>
<li>failure: release failure;</li>
<li>success: Published successfully.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Publishing status. Valid values:
<li> deploying: Releasing;</li>
<li>failure: release failure;</li>
<li>success: Published successfully.</li>
                     * @param _status Publishing status. Valid values:
<li> deploying: Releasing;</li>
<li>failure: release failure;</li>
<li>success: Published successfully.</li>
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
                     * 获取Publish result information.
                     * @return Message Publish result information.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Publish result information.
                     * @param _message Publish result information.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Release record ID.
                     * @return RecordId Release record ID.
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Release record ID.
                     * @param _recordId Release record ID.
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Change description.
                     * @return Description Change description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Change description.
                     * @param _description Change description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Detailed information of the released version.
                     */
                    std::vector<ConfigGroupVersionInfo> m_configGroupVersionInfos;
                    bool m_configGroupVersionInfosHasBeenSet;

                    /**
                     * Release time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * Publishing status. Valid values:
<li> deploying: Releasing;</li>
<li>failure: release failure;</li>
<li>success: Published successfully.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Publish result information.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Release record ID.
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Change description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYRECORD_H_
