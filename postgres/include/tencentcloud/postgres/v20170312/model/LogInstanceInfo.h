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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGINSTANCEINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Log instance info
                */
                class LogInstanceInfo : public AbstractModel
                {
                public:
                    LogInstanceInfo();
                    ~LogInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName <p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName <p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>Project ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId <p>Project ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId <p>Project ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagList <p>Instance Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>Instance Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tagList <p>Instance Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>Engine</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Engine <p>Engine</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>Engine</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engine <p>Engine</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineVersion <p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineVersion <p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>Instance status</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceStatus <p>Instance status</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>Instance status</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceStatus <p>Instance status</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>Whether audit is supported. 1 means support, 0 means not supported.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSupportAudit <p>Whether audit is supported. 1 means support, 0 means not supported.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsSupportAudit() const;

                    /**
                     * 设置<p>Whether audit is supported. 1 means support, 0 means not supported.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSupportAudit <p>Whether audit is supported. 1 means support, 0 means not supported.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsSupportAudit(const int64_t& _isSupportAudit);

                    /**
                     * 判断参数 IsSupportAudit 是否已赋值
                     * @return IsSupportAudit 是否已赋值
                     * 
                     */
                    bool IsSupportAuditHasBeenSet() const;

                    /**
                     * 获取<p>Instance ID</p>
                     * @return InstanceId <p>Instance ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID</p>
                     * @param _instanceId <p>Instance ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Log type</p><p>Enumeration value:</p><ul><li>complex: Granular audit</li><li>simple: Fast Audit</li></ul>
                     * @return AuditType <p>Log type</p><p>Enumeration value:</p><ul><li>complex: Granular audit</li><li>simple: Fast Audit</li></ul>
                     * 
                     */
                    std::string GetAuditType() const;

                    /**
                     * 设置<p>Log type</p><p>Enumeration value:</p><ul><li>complex: Granular audit</li><li>simple: Fast Audit</li></ul>
                     * @param _auditType <p>Log type</p><p>Enumeration value:</p><ul><li>complex: Granular audit</li><li>simple: Fast Audit</li></ul>
                     * 
                     */
                    void SetAuditType(const std::string& _auditType);

                    /**
                     * 判断参数 AuditType 是否已赋值
                     * @return AuditType 是否已赋值
                     * 
                     */
                    bool AuditTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance name</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>Project ID</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Instance Tag</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>Engine</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>Engine version</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Instance status</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>Whether audit is supported. 1 means support, 0 means not supported.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isSupportAudit;
                    bool m_isSupportAuditHasBeenSet;

                    /**
                     * <p>Instance ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Log type</p><p>Enumeration value:</p><ul><li>complex: Granular audit</li><li>simple: Fast Audit</li></ul>
                     */
                    std::string m_auditType;
                    bool m_auditTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGINSTANCEINFO_H_
