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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSHISTORY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Modification history of the cluster configuration files
                */
                class ClusterConfigsHistory : public AbstractModel
                {
                public:
                    ClusterConfigsHistory();
                    ~ClusterConfigsHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration file's name
                     * @return FileName Configuration file's name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Configuration file's name
                     * @param _fileName Configuration file's name
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Modified configuration file content; base64 code
                     * @return NewConfValue Modified configuration file content; base64 code
                     * 
                     */
                    std::string GetNewConfValue() const;

                    /**
                     * 设置Modified configuration file content; base64 code
                     * @param _newConfValue Modified configuration file content; base64 code
                     * 
                     */
                    void SetNewConfValue(const std::string& _newConfValue);

                    /**
                     * 判断参数 NewConfValue 是否已赋值
                     * @return NewConfValue 是否已赋值
                     * 
                     */
                    bool NewConfValueHasBeenSet() const;

                    /**
                     * 获取Configuration file content before modification; base64 code
                     * @return OldConfValue Configuration file content before modification; base64 code
                     * 
                     */
                    std::string GetOldConfValue() const;

                    /**
                     * 设置Configuration file content before modification; base64 code
                     * @param _oldConfValue Configuration file content before modification; base64 code
                     * 
                     */
                    void SetOldConfValue(const std::string& _oldConfValue);

                    /**
                     * 判断参数 OldConfValue 是否已赋值
                     * @return OldConfValue 是否已赋值
                     * 
                     */
                    bool OldConfValueHasBeenSet() const;

                    /**
                     * 获取Reason for modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Remark Reason for modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Reason for modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remark Reason for modification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Modify sub-account ID
                     * @return UserUin Modify sub-account ID
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置Modify sub-account ID
                     * @param _userUin Modify sub-account ID
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                private:

                    /**
                     * Configuration file's name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Modified configuration file content; base64 code
                     */
                    std::string m_newConfValue;
                    bool m_newConfValueHasBeenSet;

                    /**
                     * Configuration file content before modification; base64 code
                     */
                    std::string m_oldConfValue;
                    bool m_oldConfValueHasBeenSet;

                    /**
                     * Reason for modification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Modify sub-account ID
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CLUSTERCONFIGSHISTORY_H_
