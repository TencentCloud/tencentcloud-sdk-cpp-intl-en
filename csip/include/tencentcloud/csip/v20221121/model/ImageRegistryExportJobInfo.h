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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYEXPORTJOBINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYEXPORTJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Subtask information of image repository scanning
                */
                class ImageRegistryExportJobInfo : public AbstractModel
                {
                public:
                    ImageRegistryExportJobInfo();
                    ~ImageRegistryExportJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Export task id</p>
                     * @return JobID <p>Export task id</p>
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置<p>Export task id</p>
                     * @param _jobID <p>Export task id</p>
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                    /**
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>SUCCESS: Task successful</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>SUCCESS: Task successful</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Enumeration values: </p><ul><li>SUCCESS: Task successful</li></ul>
                     * @param _status <p>Task status.</p><p>Enumeration values: </p><ul><li>SUCCESS: Task successful</li></ul>
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
                     * 获取<p>appid of the account to which the task belongs</p>
                     * @return OwnerAppId <p>appid of the account to which the task belongs</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the account to which the task belongs</p>
                     * @param _ownerAppId <p>appid of the account to which the task belongs</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Export type</p>
                     * @return ExportType <p>Export type</p>
                     * 
                     */
                    std::string GetExportType() const;

                    /**
                     * 设置<p>Export type</p>
                     * @param _exportType <p>Export type</p>
                     * 
                     */
                    void SetExportType(const std::string& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task name</p>
                     * @return Name <p>Task name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Task name</p>
                     * @param _name <p>Task name</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Export time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return ExportCreateTime <p>Export time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetExportCreateTime() const;

                    /**
                     * 设置<p>Export time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _exportCreateTime <p>Export time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetExportCreateTime(const std::string& _exportCreateTime);

                    /**
                     * 判断参数 ExportCreateTime 是否已赋值
                     * @return ExportCreateTime 是否已赋值
                     * 
                     */
                    bool ExportCreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Export task id</p>
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>SUCCESS: Task successful</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>appid of the account to which the task belongs</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Export type</p>
                     */
                    std::string m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Export time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_exportCreateTime;
                    bool m_exportCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYEXPORTJOBINFO_H_
