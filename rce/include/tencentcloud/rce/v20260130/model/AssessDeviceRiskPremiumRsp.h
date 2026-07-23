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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPREMIUMRSP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPREMIUMRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Decision.h>
#include <tencentcloud/rce/v20260130/model/DataScore.h>
#include <tencentcloud/rce/v20260130/model/Device.h>
#include <tencentcloud/rce/v20260130/model/Environment.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The results of AssessDeviceRiskPremiumPro
                */
                class AssessDeviceRiskPremiumRsp : public AbstractModel
                {
                public:
                    AssessDeviceRiskPremiumRsp();
                    ~AssessDeviceRiskPremiumRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Decision information</p>
                     * @return Decision <p>Decision information</p>
                     * 
                     */
                    Decision GetDecision() const;

                    /**
                     * 设置<p>Decision information</p>
                     * @param _decision <p>Decision information</p>
                     * 
                     */
                    void SetDecision(const Decision& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取<p>The risk score information of the device</p>
                     * @return Score <p>The risk score information of the device</p>
                     * 
                     */
                    DataScore GetScore() const;

                    /**
                     * 设置<p>The risk score information of the device</p>
                     * @param _score <p>The risk score information of the device</p>
                     * 
                     */
                    void SetScore(const DataScore& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>The basic information of the device</p>
                     * @return Device <p>The basic information of the device</p>
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置<p>The basic information of the device</p>
                     * @param _device <p>The basic information of the device</p>
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取<p>Basic IP environment information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Environment <p>Basic IP environment information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置<p>Basic IP environment information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _environment <p>Basic IP environment information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * <p>Decision information</p>
                     */
                    Decision m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * <p>The risk score information of the device</p>
                     */
                    DataScore m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>The basic information of the device</p>
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>Basic IP environment information</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPREMIUMRSP_H_
