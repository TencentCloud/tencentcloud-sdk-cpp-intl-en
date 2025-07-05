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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_FAILOVERSETTINGS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_FAILOVERSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Input failover settings
                */
                class FailOverSettings : public AbstractModel
                {
                public:
                    FailOverSettings();
                    ~FailOverSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the backup input
Note: this field may return `null`, indicating that no valid value was found.
                     * @return SecondaryInputId ID of the backup input
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetSecondaryInputId() const;

                    /**
                     * 设置ID of the backup input
Note: this field may return `null`, indicating that no valid value was found.
                     * @param _secondaryInputId ID of the backup input
Note: this field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetSecondaryInputId(const std::string& _secondaryInputId);

                    /**
                     * 判断参数 SecondaryInputId 是否已赋值
                     * @return SecondaryInputId 是否已赋值
                     * 
                     */
                    bool SecondaryInputIdHasBeenSet() const;

                    /**
                     * 获取The wait time (ms) for triggering failover after the primary input becomes unavailable. Value range: [1000, 86400000]. Default value: `3000`
                     * @return LossThreshold The wait time (ms) for triggering failover after the primary input becomes unavailable. Value range: [1000, 86400000]. Default value: `3000`
                     * 
                     */
                    int64_t GetLossThreshold() const;

                    /**
                     * 设置The wait time (ms) for triggering failover after the primary input becomes unavailable. Value range: [1000, 86400000]. Default value: `3000`
                     * @param _lossThreshold The wait time (ms) for triggering failover after the primary input becomes unavailable. Value range: [1000, 86400000]. Default value: `3000`
                     * 
                     */
                    void SetLossThreshold(const int64_t& _lossThreshold);

                    /**
                     * 判断参数 LossThreshold 是否已赋值
                     * @return LossThreshold 是否已赋值
                     * 
                     */
                    bool LossThresholdHasBeenSet() const;

                    /**
                     * 获取Failover policy. Valid values: `CURRENT_PREFERRED` (default), `PRIMARY_PREFERRED`
                     * @return RecoverBehavior Failover policy. Valid values: `CURRENT_PREFERRED` (default), `PRIMARY_PREFERRED`
                     * 
                     */
                    std::string GetRecoverBehavior() const;

                    /**
                     * 设置Failover policy. Valid values: `CURRENT_PREFERRED` (default), `PRIMARY_PREFERRED`
                     * @param _recoverBehavior Failover policy. Valid values: `CURRENT_PREFERRED` (default), `PRIMARY_PREFERRED`
                     * 
                     */
                    void SetRecoverBehavior(const std::string& _recoverBehavior);

                    /**
                     * 判断参数 RecoverBehavior 是否已赋值
                     * @return RecoverBehavior 是否已赋值
                     * 
                     */
                    bool RecoverBehaviorHasBeenSet() const;

                private:

                    /**
                     * ID of the backup input
Note: this field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_secondaryInputId;
                    bool m_secondaryInputIdHasBeenSet;

                    /**
                     * The wait time (ms) for triggering failover after the primary input becomes unavailable. Value range: [1000, 86400000]. Default value: `3000`
                     */
                    int64_t m_lossThreshold;
                    bool m_lossThresholdHasBeenSet;

                    /**
                     * Failover policy. Valid values: `CURRENT_PREFERRED` (default), `PRIMARY_PREFERRED`
                     */
                    std::string m_recoverBehavior;
                    bool m_recoverBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_FAILOVERSETTINGS_H_
