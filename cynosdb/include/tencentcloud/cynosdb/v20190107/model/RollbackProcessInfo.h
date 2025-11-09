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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKPROCESSINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKPROCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ExchangeInstanceInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ExchangeRoGroupInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 
                */
                class RollbackProcessInfo : public AbstractModel
                {
                public:
                    RollbackProcessInfo();
                    ~RollbackProcessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Is it possible to switch vip.
                     * @return IsVipSwitchable Is it possible to switch vip.
                     * 
                     */
                    bool GetIsVipSwitchable() const;

                    /**
                     * 设置Is it possible to switch vip.
                     * @param _isVipSwitchable Is it possible to switch vip.
                     * 
                     */
                    void SetIsVipSwitchable(const bool& _isVipSwitchable);

                    /**
                     * 判断参数 IsVipSwitchable 是否已赋值
                     * @return IsVipSwitchable 是否已赋值
                     * 
                     */
                    bool IsVipSwitchableHasBeenSet() const;

                    /**
                     * 获取The exchangeable time of vip.
                     * @return VipSwitchableTime The exchangeable time of vip.
                     * 
                     */
                    std::string GetVipSwitchableTime() const;

                    /**
                     * 设置The exchangeable time of vip.
                     * @param _vipSwitchableTime The exchangeable time of vip.
                     * 
                     */
                    void SetVipSwitchableTime(const std::string& _vipSwitchableTime);

                    /**
                     * 判断参数 VipSwitchableTime 是否已赋值
                     * @return VipSwitchableTime 是否已赋值
                     * 
                     */
                    bool VipSwitchableTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExchangeInstanceInfoList 
                     * 
                     */
                    std::vector<ExchangeInstanceInfo> GetExchangeInstanceInfoList() const;

                    /**
                     * 设置
                     * @param _exchangeInstanceInfoList 
                     * 
                     */
                    void SetExchangeInstanceInfoList(const std::vector<ExchangeInstanceInfo>& _exchangeInstanceInfoList);

                    /**
                     * 判断参数 ExchangeInstanceInfoList 是否已赋值
                     * @return ExchangeInstanceInfoList 是否已赋值
                     * 
                     */
                    bool ExchangeInstanceInfoListHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExchangeRoGroupInfoList 
                     * 
                     */
                    std::vector<ExchangeRoGroupInfo> GetExchangeRoGroupInfoList() const;

                    /**
                     * 设置
                     * @param _exchangeRoGroupInfoList 
                     * 
                     */
                    void SetExchangeRoGroupInfoList(const std::vector<ExchangeRoGroupInfo>& _exchangeRoGroupInfoList);

                    /**
                     * 判断参数 ExchangeRoGroupInfoList 是否已赋值
                     * @return ExchangeRoGroupInfoList 是否已赋值
                     * 
                     */
                    bool ExchangeRoGroupInfoListHasBeenSet() const;

                    /**
                     * 获取Current step.
                     * @return CurrentStep Current step.
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置Current step.
                     * @param _currentStep Current step.
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取Current step progress.
                     * @return CurrentStepProgress Current step progress.
                     * 
                     */
                    int64_t GetCurrentStepProgress() const;

                    /**
                     * 设置Current step progress.
                     * @param _currentStepProgress Current step progress.
                     * 
                     */
                    void SetCurrentStepProgress(const int64_t& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     * 
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取Remaining time of the current step.
                     * @return CurrentStepRemainingTime Remaining time of the current step.
                     * 
                     */
                    std::string GetCurrentStepRemainingTime() const;

                    /**
                     * 设置Remaining time of the current step.
                     * @param _currentStepRemainingTime Remaining time of the current step.
                     * 
                     */
                    void SetCurrentStepRemainingTime(const std::string& _currentStepRemainingTime);

                    /**
                     * 判断参数 CurrentStepRemainingTime 是否已赋值
                     * @return CurrentStepRemainingTime 是否已赋值
                     * 
                     */
                    bool CurrentStepRemainingTimeHasBeenSet() const;

                private:

                    /**
                     * Is it possible to switch vip.
                     */
                    bool m_isVipSwitchable;
                    bool m_isVipSwitchableHasBeenSet;

                    /**
                     * The exchangeable time of vip.
                     */
                    std::string m_vipSwitchableTime;
                    bool m_vipSwitchableTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ExchangeInstanceInfo> m_exchangeInstanceInfoList;
                    bool m_exchangeInstanceInfoListHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ExchangeRoGroupInfo> m_exchangeRoGroupInfoList;
                    bool m_exchangeRoGroupInfoListHasBeenSet;

                    /**
                     * Current step.
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * Current step progress.
                     */
                    int64_t m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * Remaining time of the current step.
                     */
                    std::string m_currentStepRemainingTime;
                    bool m_currentStepRemainingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ROLLBACKPROCESSINFO_H_
