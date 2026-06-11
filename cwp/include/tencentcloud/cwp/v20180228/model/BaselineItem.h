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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_

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
                * Baseline Item
                */
                class BaselineItem : public AbstractModel
                {
                public:
                    BaselineItem();
                    ~BaselineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Item ID
                     * @return ItemId Item ID
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置Item ID
                     * @param _itemId Item ID
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Item Name
                     * @return ItemName Item Name
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置Item Name
                     * @param _itemName Item Name
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
                     * 获取Detection Item Classification
                     * @return CategoryId Detection Item Classification
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置Detection Item Classification
                     * @param _categoryId Detection Item Classification
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取Item Description
                     * @return ItemDesc Item Description
                     * 
                     */
                    std::string GetItemDesc() const;

                    /**
                     * 设置Item Description
                     * @param _itemDesc Item Description
                     * 
                     */
                    void SetItemDesc(const std::string& _itemDesc);

                    /**
                     * 判断参数 ItemDesc 是否已赋值
                     * @return ItemDesc 是否已赋值
                     * 
                     */
                    bool ItemDescHasBeenSet() const;

                    /**
                     * 获取Fixing Method
                     * @return FixMethod Fixing Method
                     * 
                     */
                    std::string GetFixMethod() const;

                    /**
                     * 设置Fixing Method
                     * @param _fixMethod Fixing Method
                     * 
                     */
                    void SetFixMethod(const std::string& _fixMethod);

                    /**
                     * 判断参数 FixMethod 是否已赋值
                     * @return FixMethod 是否已赋值
                     * 
                     */
                    bool FixMethodHasBeenSet() const;

                    /**
                     * 获取Rule
                     * @return RuleName Rule
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Rule
                     * @param _ruleName Rule
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取Check result description
                     * @return DetectResultDesc Check result description
                     * 
                     */
                    std::string GetDetectResultDesc() const;

                    /**
                     * 设置Check result description
                     * @param _detectResultDesc Check result description
                     * 
                     */
                    void SetDetectResultDesc(const std::string& _detectResultDesc);

                    /**
                     * 判断参数 DetectResultDesc 是否已赋值
                     * @return DetectResultDesc 是否已赋值
                     * 
                     */
                    bool DetectResultDescHasBeenSet() const;

                    /**
                     * 获取Risk level
                     * @return Level Risk level
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Risk level
                     * @param _level Risk level
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Detection Status. 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * @return DetectStatus Detection Status. 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * 
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置Detection Status. 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * @param _detectStatus Detection Status. 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * 
                     */
                    void SetDetectStatus(const int64_t& _detectStatus);

                    /**
                     * 判断参数 DetectStatus 是否已赋值
                     * @return DetectStatus 是否已赋值
                     * 
                     */
                    bool DetectStatusHasBeenSet() const;

                    /**
                     * 获取Host ID
                     * @return HostId Host ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置Host ID
                     * @param _hostId Host ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取host name
                     * @return HostName host name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置host name
                     * @param _hostName host name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

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
                     * 获取Public IP address
                     * @return WanIp Public IP address
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置Public IP address
                     * @param _wanIp Public IP address
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取First Occurrence Time
                     * @return FirstTime First Occurrence Time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First Occurrence Time
                     * @param _firstTime First Occurrence Time
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取Last Occurrence Time
                     * @return LastTime Last Occurrence Time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last Occurrence Time
                     * @param _lastTime Last Occurrence Time
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取Can Be Fixed or Not
                     * @return CanBeFixed Can Be Fixed or Not
                     * 
                     */
                    int64_t GetCanBeFixed() const;

                    /**
                     * 设置Can Be Fixed or Not
                     * @param _canBeFixed Can Be Fixed or Not
                     * 
                     */
                    void SetCanBeFixed(const int64_t& _canBeFixed);

                    /**
                     * 判断参数 CanBeFixed 是否已赋值
                     * @return CanBeFixed 是否已赋值
                     * 
                     */
                    bool CanBeFixedHasBeenSet() const;

                    /**
                     * 获取Host Security UUID
                     * @return Uuid Host Security UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host Security UUID
                     * @param _uuid Host Security UUID
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
                     * Item ID
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Item Name
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * Detection Item Classification
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * Item Description
                     */
                    std::string m_itemDesc;
                    bool m_itemDescHasBeenSet;

                    /**
                     * Fixing Method
                     */
                    std::string m_fixMethod;
                    bool m_fixMethodHasBeenSet;

                    /**
                     * Rule
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Check result description
                     */
                    std::string m_detectResultDesc;
                    bool m_detectResultDescHasBeenSet;

                    /**
                     * Risk level
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Detection Status. 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * Host ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * host name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP address
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Public IP address
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * First Occurrence Time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Last Occurrence Time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Can Be Fixed or Not
                     */
                    int64_t m_canBeFixed;
                    bool m_canBeFixedHasBeenSet;

                    /**
                     * Host Security UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

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

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEM_H_
