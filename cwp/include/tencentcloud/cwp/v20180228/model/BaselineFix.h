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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEFIX_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEFIX_H_

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
                * Baseline password fix
                */
                class BaselineFix : public AbstractModel
                {
                public:
                    BaselineFix();
                    ~BaselineFix() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Item name to repair
                     * @return ItemName Item name to repair
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置Item name to repair
                     * @param _itemName Item name to repair
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取Host IP address
                     * @return HostIp Host IP address
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
                     * @param _hostIp Host IP address
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
                     * 获取First detection time
                     * @return CreateTime First detection time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置First detection time
                     * @param _createTime First detection time
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
                     * 获取Last detection time
                     * @return ModifyTime Last detection time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last detection time
                     * @param _modifyTime Last detection time
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
                     * 获取Fixing time
                     * @return FixTime Fixing time
                     * 
                     */
                    std::string GetFixTime() const;

                    /**
                     * 设置Fixing time
                     * @param _fixTime Fixing time
                     * 
                     */
                    void SetFixTime(const std::string& _fixTime);

                    /**
                     * 判断参数 FixTime 是否已赋值
                     * @return FixTime 是否已赋值
                     * 
                     */
                    bool FixTimeHasBeenSet() const;

                    /**
                     * 获取Baseline detection item result ID
                     * @return Id Baseline detection item result ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Baseline detection item result ID
                     * @param _id Baseline detection item result ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Host Additional Information
                     * @return MachineExtraInfo Host Additional Information
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置Host Additional Information
                     * @param _machineExtraInfo Host Additional Information
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
                     * Item name to repair
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Fixing time
                     */
                    std::string m_fixTime;
                    bool m_fixTimeHasBeenSet;

                    /**
                     * Baseline detection item result ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host Additional Information
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEFIX_H_
