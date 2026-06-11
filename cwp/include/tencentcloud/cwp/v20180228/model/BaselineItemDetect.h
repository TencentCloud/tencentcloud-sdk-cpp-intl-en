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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMDETECT_H_

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
                * Baseline detection item
                */
                class BaselineItemDetect : public AbstractModel
                {
                public:
                    BaselineItemDetect();
                    ~BaselineItemDetect() = default;
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
                     * 获取0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * @return DetectStatus 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * 
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     * @param _detectStatus 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
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
                     * 获取Number of affected servers
                     * @return HostCount Number of affected servers
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Number of affected servers
                     * @param _hostCount Number of affected servers
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取First detection time
                     * @return FirstTime First detection time
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置First detection time
                     * @param _firstTime First detection time
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
                     * 获取Last detection time
                     * @return LastTime Last detection time
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置Last detection time
                     * @param _lastTime Last detection time
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
                     * 获取Detection result; JSON string.
                     * @return DetectResult Detection result; JSON string.
                     * 
                     */
                    std::string GetDetectResult() const;

                    /**
                     * 设置Detection result; JSON string.
                     * @param _detectResult Detection result; JSON string.
                     * 
                     */
                    void SetDetectResult(const std::string& _detectResult);

                    /**
                     * 判断参数 DetectResult 是否已赋值
                     * @return DetectResult 是否已赋值
                     * 
                     */
                    bool DetectResultHasBeenSet() const;

                    /**
                     * 获取Rule ID.
                     * @return RuleId Rule ID.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleId Rule ID.
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Number of servers passed.
                     * @return PassedHostCount Number of servers passed.
                     * 
                     */
                    int64_t GetPassedHostCount() const;

                    /**
                     * 设置Number of servers passed.
                     * @param _passedHostCount Number of servers passed.
                     * 
                     */
                    void SetPassedHostCount(const int64_t& _passedHostCount);

                    /**
                     * 判断参数 PassedHostCount 是否已赋值
                     * @return PassedHostCount 是否已赋值
                     * 
                     */
                    bool PassedHostCountHasBeenSet() const;

                    /**
                     * 获取Number of servers failed.
                     * @return NotPassedHostCount Number of servers failed.
                     * 
                     */
                    int64_t GetNotPassedHostCount() const;

                    /**
                     * 设置Number of servers failed.
                     * @param _notPassedHostCount Number of servers failed.
                     * 
                     */
                    void SetNotPassedHostCount(const int64_t& _notPassedHostCount);

                    /**
                     * 判断参数 NotPassedHostCount 是否已赋值
                     * @return NotPassedHostCount 是否已赋值
                     * 
                     */
                    bool NotPassedHostCountHasBeenSet() const;

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
                     * 0: Failed; 1: Ignored; 3: Passed; 5: Under detection
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * Risk level
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Number of affected servers
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * First detection time
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * Last detection time
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * Detection result; JSON string.
                     */
                    std::string m_detectResult;
                    bool m_detectResultHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Number of servers passed.
                     */
                    int64_t m_passedHostCount;
                    bool m_passedHostCountHasBeenSet;

                    /**
                     * Number of servers failed.
                     */
                    int64_t m_notPassedHostCount;
                    bool m_notPassedHostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEITEMDETECT_H_
