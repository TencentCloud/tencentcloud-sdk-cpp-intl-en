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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AUTODELETEPOLICY_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AUTODELETEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Automatic deletion policy configuration information.
                */
                class AutoDeletePolicy : public AbstractModel
                {
                public:
                    AutoDeletePolicy();
                    ~AutoDeletePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Policy ID.</p>
                     * @return PolicyId <p>Policy ID.</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>Policy ID.</p>
                     * @param _policyId <p>Policy ID.</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>File system Id.</p>
                     * @return FileSystemId <p>File system Id.</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>File system Id.</p>
                     * @param _fileSystemId <p>File system Id.</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>Automatic cleanup policy name.</p>
                     * @return PolicyName <p>Automatic cleanup policy name.</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>Automatic cleanup policy name.</p>
                     * @param _policyName <p>Automatic cleanup policy name.</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>Path to be cleaned up.</p>
                     * @return Paths <p>Path to be cleaned up.</p>
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置<p>Path to be cleaned up.</p>
                     * @param _paths <p>Path to be cleaned up.</p>
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取<p>Automatic cleanup policy status.</p><p>Enumeration values:</p><ul><li>enabling: Enabling</li><li>enabled: Enabled</li><li>disabling: Disabling</li><li>disabed: Disabled</li><li>deleting: Deleting</li><li>failed: Failed</li><li>creating: Creating</li><li>updating: Updating</li></ul>
                     * @return Status <p>Automatic cleanup policy status.</p><p>Enumeration values:</p><ul><li>enabling: Enabling</li><li>enabled: Enabled</li><li>disabling: Disabling</li><li>disabed: Disabled</li><li>deleting: Deleting</li><li>failed: Failed</li><li>creating: Creating</li><li>updating: Updating</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Automatic cleanup policy status.</p><p>Enumeration values:</p><ul><li>enabling: Enabling</li><li>enabled: Enabled</li><li>disabling: Disabling</li><li>disabed: Disabled</li><li>deleting: Deleting</li><li>failed: Failed</li><li>creating: Creating</li><li>updating: Updating</li></ul>
                     * @param _status <p>Automatic cleanup policy status.</p><p>Enumeration values:</p><ul><li>enabling: Enabling</li><li>enabled: Enabled</li><li>disabling: Disabling</li><li>disabed: Disabled</li><li>deleting: Deleting</li><li>failed: Failed</li><li>creating: Creating</li><li>updating: Updating</li></ul>
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
                     * 获取<p>Cleanup policy creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return CreateTime <p>Cleanup policy creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Cleanup policy creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _createTime <p>Cleanup policy creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
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
                     * 获取<p>Policy update time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return UpdateTime <p>Policy update time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Policy update time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _updateTime <p>Policy update time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Region to which the policy belongs.</p>
                     * @return Region <p>Region to which the policy belongs.</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region to which the policy belongs.</p>
                     * @param _region <p>Region to which the policy belongs.</p>
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
                     * 获取<p>Error information.</p>
                     * @return ErrMsg <p>Error information.</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>Error information.</p>
                     * @param _errMsg <p>Error information.</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>Policy ID.</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>File system Id.</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>Automatic cleanup policy name.</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>Path to be cleaned up.</p>
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * <p>Automatic cleanup policy status.</p><p>Enumeration values:</p><ul><li>enabling: Enabling</li><li>enabled: Enabled</li><li>disabling: Disabling</li><li>disabed: Disabled</li><li>deleting: Deleting</li><li>failed: Failed</li><li>creating: Creating</li><li>updating: Updating</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Cleanup policy creation time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Policy update time.</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Region to which the policy belongs.</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Error information.</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AUTODELETEPOLICY_H_
