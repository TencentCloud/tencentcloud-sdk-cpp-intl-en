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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_RUMPROJECT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_RUMPROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * RUM project information
                */
                class RumProject : public AbstractModel
                {
                public:
                    RumProject();
                    ~RumProject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project name
                     * @return Name Project name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name
                     * @param _name Project name
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
                     * 获取Creator ID
                     * @return Creator Creator ID
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator ID
                     * @param _creator Creator ID
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceID Instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceID Instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Project type
                     * @return Type Project type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Project type
                     * @param _type Project type
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取Project repository address
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Repo Project repository address
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置Project repository address
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _repo Project repository address
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取Project URL
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return URL Project URL
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置Project URL
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _uRL Project URL
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取Project sample rate
                     * @return Rate Project sample rate
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置Project sample rate
                     * @param _rate Project sample rate
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Unique project key (12 characters)
                     * @return Key Unique project key (12 characters)
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Unique project key (12 characters)
                     * @param _key Unique project key (12 characters)
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Whether to enable URL aggregation
                     * @return EnableURLGroup Whether to enable URL aggregation
                     * 
                     */
                    int64_t GetEnableURLGroup() const;

                    /**
                     * 设置Whether to enable URL aggregation
                     * @param _enableURLGroup Whether to enable URL aggregation
                     * 
                     */
                    void SetEnableURLGroup(const int64_t& _enableURLGroup);

                    /**
                     * 判断参数 EnableURLGroup 是否已赋值
                     * @return EnableURLGroup 是否已赋值
                     * 
                     */
                    bool EnableURLGroupHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Project ID
                     * @return ID Project ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID
                     * @param _iD Project ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Instance key
                     * @return InstanceKey Instance key
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置Instance key
                     * @param _instanceKey Instance key
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取Project description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Desc Project description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Project description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _desc Project description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Starred status. 1: yes; 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsStar Starred status. 1: yes; 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsStar() const;

                    /**
                     * 设置Starred status. 1: yes; 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isStar Starred status. 1: yes; 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsStar(const int64_t& _isStar);

                    /**
                     * 判断参数 IsStar 是否已赋值
                     * @return IsStar 是否已赋值
                     * 
                     */
                    bool IsStarHasBeenSet() const;

                    /**
                     * 获取Project status (`1`: Creating; `2`: Running; `3`: Abnormal; `4`: Restarting; `5`: Stopping; `6`: Stopped; `7`: Terminating; `8`: Terminated)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ProjectStatus Project status (`1`: Creating; `2`: Running; `3`: Abnormal; `4`: Restarting; `5`: Stopping; `6`: Stopped; `7`: Terminating; `8`: Terminated)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetProjectStatus() const;

                    /**
                     * 设置Project status (`1`: Creating; `2`: Running; `3`: Abnormal; `4`: Restarting; `5`: Stopping; `6`: Stopped; `7`: Terminating; `8`: Terminated)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _projectStatus Project status (`1`: Creating; `2`: Running; `3`: Abnormal; `4`: Restarting; `5`: Stopping; `6`: Stopped; `7`: Terminating; `8`: Terminated)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectStatus(const int64_t& _projectStatus);

                    /**
                     * 判断参数 ProjectStatus 是否已赋值
                     * @return ProjectStatus 是否已赋值
                     * 
                     */
                    bool ProjectStatusHasBeenSet() const;

                private:

                    /**
                     * Project name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creator ID
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Project type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Project repository address
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * Project URL
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * Project sample rate
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Unique project key (12 characters)
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Whether to enable URL aggregation
                     */
                    int64_t m_enableURLGroup;
                    bool m_enableURLGroupHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Instance key
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * Project description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Starred status. 1: yes; 0: no
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isStar;
                    bool m_isStarHasBeenSet;

                    /**
                     * Project status (`1`: Creating; `2`: Running; `3`: Abnormal; `4`: Restarting; `5`: Stopping; `6`: Stopped; `7`: Terminating; `8`: Terminated)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_projectStatus;
                    bool m_projectStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_RUMPROJECT_H_
