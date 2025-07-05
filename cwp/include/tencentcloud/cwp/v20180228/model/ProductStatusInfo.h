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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PRODUCTSTATUSINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PRODUCTSTATUSINFO_H_

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
                * Product trial status query API Data output parameter
                */
                class ProductStatusInfo : public AbstractModel
                {
                public:
                    ProductStatusInfo();
                    ~ProductStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protection status. 1: unprotected; 2: protecting; 3: in trial; 4 expired
                     * @return FWUserStatus Protection status. 1: unprotected; 2: protecting; 3: in trial; 4 expired
                     * 
                     */
                    uint64_t GetFWUserStatus() const;

                    /**
                     * 设置Protection status. 1: unprotected; 2: protecting; 3: in trial; 4 expired
                     * @param _fWUserStatus Protection status. 1: unprotected; 2: protecting; 3: in trial; 4 expired
                     * 
                     */
                    void SetFWUserStatus(const uint64_t& _fWUserStatus);

                    /**
                     * 判断参数 FWUserStatus 是否已赋值
                     * @return FWUserStatus 是否已赋值
                     * 
                     */
                    bool FWUserStatusHasBeenSet() const;

                    /**
                     * 获取Whether application for trial is available. True indicates yes.
                     * @return CanApplyTrial Whether application for trial is available. True indicates yes.
                     * 
                     */
                    bool GetCanApplyTrial() const;

                    /**
                     * 设置Whether application for trial is available. True indicates yes.
                     * @param _canApplyTrial Whether application for trial is available. True indicates yes.
                     * 
                     */
                    void SetCanApplyTrial(const bool& _canApplyTrial);

                    /**
                     * 判断参数 CanApplyTrial 是否已赋值
                     * @return CanApplyTrial 是否已赋值
                     * 
                     */
                    bool CanApplyTrialHasBeenSet() const;

                    /**
                     * 获取Reason for unavailable trial (Leave it blank if the trial is available.)
                     * @return CanNotApplyReason Reason for unavailable trial (Leave it blank if the trial is available.)
                     * 
                     */
                    std::string GetCanNotApplyReason() const;

                    /**
                     * 设置Reason for unavailable trial (Leave it blank if the trial is available.)
                     * @param _canNotApplyReason Reason for unavailable trial (Leave it blank if the trial is available.)
                     * 
                     */
                    void SetCanNotApplyReason(const std::string& _canNotApplyReason);

                    /**
                     * 判断参数 CanNotApplyReason 是否已赋值
                     * @return CanNotApplyReason 是否已赋值
                     * 
                     */
                    bool CanNotApplyReasonHasBeenSet() const;

                    /**
                     * 获取Last trial end time (Leave it blank if no trial record exists.)
                     * @return LastTrialTime Last trial end time (Leave it blank if no trial record exists.)
                     * 
                     */
                    std::string GetLastTrialTime() const;

                    /**
                     * 设置Last trial end time (Leave it blank if no trial record exists.)
                     * @param _lastTrialTime Last trial end time (Leave it blank if no trial record exists.)
                     * 
                     */
                    void SetLastTrialTime(const std::string& _lastTrialTime);

                    /**
                     * 判断参数 LastTrialTime 是否已赋值
                     * @return LastTrialTime 是否已赋值
                     * 
                     */
                    bool LastTrialTimeHasBeenSet() const;

                private:

                    /**
                     * Protection status. 1: unprotected; 2: protecting; 3: in trial; 4 expired
                     */
                    uint64_t m_fWUserStatus;
                    bool m_fWUserStatusHasBeenSet;

                    /**
                     * Whether application for trial is available. True indicates yes.
                     */
                    bool m_canApplyTrial;
                    bool m_canApplyTrialHasBeenSet;

                    /**
                     * Reason for unavailable trial (Leave it blank if the trial is available.)
                     */
                    std::string m_canNotApplyReason;
                    bool m_canNotApplyReasonHasBeenSet;

                    /**
                     * Last trial end time (Leave it blank if no trial record exists.)
                     */
                    std::string m_lastTrialTime;
                    bool m_lastTrialTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PRODUCTSTATUSINFO_H_
