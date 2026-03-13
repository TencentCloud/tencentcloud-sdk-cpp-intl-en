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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CLONEINSTANCEMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CLONEINSTANCEMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Clone instance object.
                */
                class CloneInstanceModel : public AbstractModel
                {
                public:
                    CloneInstanceModel();
                    ~CloneInstanceModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Clone task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneEndTime Clone task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneEndTime() const;

                    /**
                     * 设置Clone task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneEndTime Clone task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneEndTime(const std::string& _cloneEndTime);

                    /**
                     * 判断参数 CloneEndTime 是否已赋值
                     * @return CloneEndTime 是否已赋值
                     * 
                     */
                    bool CloneEndTimeHasBeenSet() const;

                    /**
                     * 获取Clone record ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneId Clone record ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCloneId() const;

                    /**
                     * 设置Clone record ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneId Clone record ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneId(const int64_t& _cloneId);

                    /**
                     * 判断参数 CloneId 是否已赋值
                     * @return CloneId 是否已赋值
                     * 
                     */
                    bool CloneIdHasBeenSet() const;

                    /**
                     * 获取Clone instance type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneInsType Clone instance type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneInsType() const;

                    /**
                     * 设置Clone instance type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneInsType Clone instance type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneInsType(const std::string& _cloneInsType);

                    /**
                     * 判断参数 CloneInsType 是否已赋值
                     * @return CloneInsType 是否已赋值
                     * 
                     */
                    bool CloneInsTypeHasBeenSet() const;

                    /**
                     * 获取Clone instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneInstanceId Clone instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneInstanceId() const;

                    /**
                     * 设置Clone instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneInstanceId Clone instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneInstanceId(const std::string& _cloneInstanceId);

                    /**
                     * 判断参数 CloneInstanceId 是否已赋值
                     * @return CloneInstanceId 是否已赋值
                     * 
                     */
                    bool CloneInstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether the clone instance is deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneInstanceIsDeleted Whether the clone instance is deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCloneInstanceIsDeleted() const;

                    /**
                     * 设置Whether the clone instance is deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneInstanceIsDeleted Whether the clone instance is deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneInstanceIsDeleted(const bool& _cloneInstanceIsDeleted);

                    /**
                     * 判断参数 CloneInstanceIsDeleted 是否已赋值
                     * @return CloneInstanceIsDeleted 是否已赋值
                     * 
                     */
                    bool CloneInstanceIsDeletedHasBeenSet() const;

                    /**
                     * 获取Task progress of clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneProgress Task progress of clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetCloneProgress() const;

                    /**
                     * 设置Task progress of clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneProgress Task progress of clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneProgress(const double& _cloneProgress);

                    /**
                     * 判断参数 CloneProgress 是否已赋值
                     * @return CloneProgress 是否已赋值
                     * 
                     */
                    bool CloneProgressHasBeenSet() const;

                    /**
                     * 获取Task start time of the clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneStartTime Task start time of the clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneStartTime() const;

                    /**
                     * 设置Task start time of the clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneStartTime Task start time of the clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneStartTime(const std::string& _cloneStartTime);

                    /**
                     * 判断参数 CloneStartTime 是否已赋值
                     * @return CloneStartTime 是否已赋值
                     * 
                     */
                    bool CloneStartTimeHasBeenSet() const;

                    /**
                     * 获取Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneStatus Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneStatus() const;

                    /**
                     * 设置Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneStatus Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneStatus(const std::string& _cloneStatus);

                    /**
                     * 判断参数 CloneStatus 是否已赋值
                     * @return CloneStatus 是否已赋值
                     * 
                     */
                    bool CloneStatusHasBeenSet() const;

                    /**
                     * 获取Clone time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneTime Clone time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneTime() const;

                    /**
                     * 设置Clone time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneTime Clone time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneTime(const std::string& _cloneTime);

                    /**
                     * 判断参数 CloneTime 是否已赋值
                     * @return CloneTime 是否已赋值
                     * 
                     */
                    bool CloneTimeHasBeenSet() const;

                    /**
                     * 获取Clone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloneType Clone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloneType() const;

                    /**
                     * 设置Clone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloneType Clone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCloneType(const std::string& _cloneType);

                    /**
                     * 判断参数 CloneType 是否已赋值
                     * @return CloneType 是否已赋值
                     * 
                     */
                    bool CloneTypeHasBeenSet() const;

                    /**
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DBType Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dBType Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Source instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceInstanceId Source instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置Source instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceInstanceId Source instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                private:

                    /**
                     * Clone task end time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneEndTime;
                    bool m_cloneEndTimeHasBeenSet;

                    /**
                     * Clone record ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cloneId;
                    bool m_cloneIdHasBeenSet;

                    /**
                     * Clone instance type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneInsType;
                    bool m_cloneInsTypeHasBeenSet;

                    /**
                     * Clone instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneInstanceId;
                    bool m_cloneInstanceIdHasBeenSet;

                    /**
                     * Whether the clone instance is deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_cloneInstanceIsDeleted;
                    bool m_cloneInstanceIsDeletedHasBeenSet;

                    /**
                     * Task progress of clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_cloneProgress;
                    bool m_cloneProgressHasBeenSet;

                    /**
                     * Task start time of the clone.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneStartTime;
                    bool m_cloneStartTimeHasBeenSet;

                    /**
                     * Task status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneStatus;
                    bool m_cloneStatusHasBeenSet;

                    /**
                     * Clone time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneTime;
                    bool m_cloneTimeHasBeenSet;

                    /**
                     * Clone type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloneType;
                    bool m_cloneTypeHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Engine type.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Source instance ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CLONEINSTANCEMODEL_H_
