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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELISTDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELISTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * List of displayed blocking allowlist information, including the machine information
                */
                class BanWhiteListDetail : public AbstractModel
                {
                public:
                    BanWhiteListDetail();
                    ~BanWhiteListDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowlist ID
                     * @return Id Allowlist ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Allowlist ID
                     * @param _id Allowlist ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Allowlist alias
                     * @return Remark Allowlist alias
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Allowlist alias
                     * @param _remark Allowlist alias
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
                     * 获取Blocking source IP address
                     * @return SrcIp Blocking source IP address
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Blocking source IP address
                     * @param _srcIp Blocking source IP address
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取Allowlist modification time
                     * @return ModifyTime Allowlist modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Allowlist modification time
                     * @param _modifyTime Allowlist modification time
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
                     * 获取Allowlist creation time
                     * @return CreateTime Allowlist creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Allowlist creation time
                     * @param _createTime Allowlist creation time
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
                     * 获取Whether the allowlist takes effect globally
                     * @return IsGlobal Whether the allowlist takes effect globally
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether the allowlist takes effect globally
                     * @param _isGlobal Whether the allowlist takes effect globally
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Machine UUID
                     * @return Quuid Machine UUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Machine UUID
                     * @param _quuid Machine UUID
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
                     * 获取CWPP program UUID
                     * @return Uuid CWPP program UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置CWPP program UUID
                     * @param _uuid CWPP program UUID
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
                     * 获取Machine IP address
                     * @return MachineIp Machine IP address
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置Machine IP address
                     * @param _machineIp Machine IP address
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取Machine name
                     * @return MachineName Machine name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Machine name
                     * @param _machineName Machine name
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                private:

                    /**
                     * Allowlist ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Allowlist alias
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Blocking source IP address
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Allowlist modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Allowlist creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the allowlist takes effect globally
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Machine UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * CWPP program UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Machine IP address
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * Machine name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELISTDETAIL_H_
