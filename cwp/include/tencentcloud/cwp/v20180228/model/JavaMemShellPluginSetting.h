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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGINSETTING_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGINSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Java Memory Trojan Plugin Configuration
                */
                class JavaMemShellPluginSetting : public AbstractModel
                {
                public:
                    JavaMemShellPluginSetting();
                    ~JavaMemShellPluginSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Container QUUID
                     * @return Quuid Container QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Container QUUID
                     * @param _quuid Container QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Server name
                     * @return Alias Server name
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Server name
                     * @param _alias Server name
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Server IP address
                     * @return HostIp Server IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Server IP address
                     * @param _hostIp Server IP address
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Javashell Plugin Switch. 0: Off; 1: On
                     * @return JavaShellStatus Javashell Plugin Switch. 0: Off; 1: On
                     * 
                     */
                    uint64_t GetJavaShellStatus() const;

                    /**
                     * 设置Javashell Plugin Switch. 0: Off; 1: On
                     * @param _javaShellStatus Javashell Plugin Switch. 0: Off; 1: On
                     * 
                     */
                    void SetJavaShellStatus(const uint64_t& _javaShellStatus);

                    /**
                     * 判断参数 JavaShellStatus 是否已赋值
                     * @return JavaShellStatus 是否已赋值
                     * 
                     */
                    bool JavaShellStatusHasBeenSet() const;

                    /**
                     * 获取Plugin Exception Status. 0: Normal; 1: Abnormal
                     * @return Exception Plugin Exception Status. 0: Normal; 1: Abnormal
                     * 
                     */
                    uint64_t GetException() const;

                    /**
                     * 设置Plugin Exception Status. 0: Normal; 1: Abnormal
                     * @param _exception Plugin Exception Status. 0: Normal; 1: Abnormal
                     * 
                     */
                    void SetException(const uint64_t& _exception);

                    /**
                     * 判断参数 Exception 是否已赋值
                     * @return Exception 是否已赋值
                     * 
                     */
                    bool ExceptionHasBeenSet() const;

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
                     * 获取Server UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Server UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Server UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Server UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MachineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _machineExtraInfo Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * Container QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Server name
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Server IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Javashell Plugin Switch. 0: Off; 1: On
                     */
                    uint64_t m_javaShellStatus;
                    bool m_javaShellStatusHasBeenSet;

                    /**
                     * Plugin Exception Status. 0: Normal; 1: Abnormal
                     */
                    uint64_t m_exception;
                    bool m_exceptionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Server UUID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host Additional Information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_JAVAMEMSHELLPLUGINSETTING_H_
