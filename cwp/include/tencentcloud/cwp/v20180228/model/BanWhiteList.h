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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELIST_H_

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
                * Block allowlist rules
                */
                class BanWhiteList : public AbstractModel
                {
                public:
                    BanWhiteList();
                    ~BanWhiteList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Allowlist IDs
                     * @return Id Allowlist IDs
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Allowlist IDs
                     * @param _id Allowlist IDs
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
                     * 获取Allowlist aliases
                     * @return Remark Allowlist aliases
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Allowlist aliases
                     * @param _remark Allowlist aliases
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
                     * 获取Block source IP
                     * @return SrcIp Block source IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置Block source IP
                     * @param _srcIp Block source IP
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
                     * 获取Time of modifying allowlists
                     * @return ModifyTime Time of modifying allowlists
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Time of modifying allowlists
                     * @param _modifyTime Time of modifying allowlists
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
                     * 获取Time of creating allowlists
                     * @return CreateTime Time of creating allowlists
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Time of creating allowlists
                     * @param _createTime Time of creating allowlists
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
                     * 获取Machine associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Machine associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Machine associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Machine associated with the allowlist
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
                     * 获取Whether the allowlist is global
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsGlobal Whether the allowlist is global
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置Whether the allowlist is global
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isGlobal Whether the allowlist is global
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Machine list associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuids Machine list associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Machine list associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuids Machine list associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * Allowlist IDs
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Allowlist aliases
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Block source IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * Time of modifying allowlists
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Time of creating allowlists
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Machine associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Whether the allowlist is global
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Machine list associated with the allowlist
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BANWHITELIST_H_
