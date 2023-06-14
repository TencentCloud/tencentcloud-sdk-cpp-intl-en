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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEROTATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEROTATIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * UpdateRotationStatus request structure.
                */
                class UpdateRotationStatusRequest : public AbstractModel
                {
                public:
                    UpdateRotationStatusRequest();
                    ~UpdateRotationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tencent Cloud service credential name.
                     * @return SecretName Tencent Cloud service credential name.
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置Tencent Cloud service credential name.
                     * @param _secretName Tencent Cloud service credential name.
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable rotation.
`true`: enables rotation.
`false`: disables rotation.
                     * @return EnableRotation Specifies whether to enable rotation.
`true`: enables rotation.
`false`: disables rotation.
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 设置Specifies whether to enable rotation.
`true`: enables rotation.
`false`: disables rotation.
                     * @param _enableRotation Specifies whether to enable rotation.
`true`: enables rotation.
`false`: disables rotation.
                     * 
                     */
                    void SetEnableRotation(const bool& _enableRotation);

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     * 
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取Rotation frequency in days. Value range: 30–365.
                     * @return Frequency Rotation frequency in days. Value range: 30–365.
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置Rotation frequency in days. Value range: 30–365.
                     * @param _frequency Rotation frequency in days. Value range: 30–365.
                     * 
                     */
                    void SetFrequency(const int64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取User-defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `true` and `RotationBeginTime` is left empty, the current time will be entered by default.
                     * @return RotationBeginTime User-defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `true` and `RotationBeginTime` is left empty, the current time will be entered by default.
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置User-defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `true` and `RotationBeginTime` is left empty, the current time will be entered by default.
                     * @param _rotationBeginTime User-defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `true` and `RotationBeginTime` is left empty, the current time will be entered by default.
                     * 
                     */
                    void SetRotationBeginTime(const std::string& _rotationBeginTime);

                    /**
                     * 判断参数 RotationBeginTime 是否已赋值
                     * @return RotationBeginTime 是否已赋值
                     * 
                     */
                    bool RotationBeginTimeHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud service credential name.
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * Specifies whether to enable rotation.
`true`: enables rotation.
`false`: disables rotation.
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * Rotation frequency in days. Value range: 30–365.
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * User-defined rotation start time in the format of 2006-01-02 15:04:05.
When `EnableRotation` is `true` and `RotationBeginTime` is left empty, the current time will be entered by default.
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEROTATIONSTATUSREQUEST_H_
