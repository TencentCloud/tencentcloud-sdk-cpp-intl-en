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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ConvertOperatingSystems request structure.
                */
                class ConvertOperatingSystemsRequest : public AbstractModel
                {
                public:
                    ConvertOperatingSystemsRequest();
                    ~ConvertOperatingSystemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of an instance to execute operating system switching.
                     * @return InstanceIds ID of an instance to execute operating system switching.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置ID of an instance to execute operating system switching.
                     * @param _instanceIds ID of an instance to execute operating system switching.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether it is a minimum scale switching.
                     * @return MinimalConversion Whether it is a minimum scale switching.
                     * 
                     */
                    bool GetMinimalConversion() const;

                    /**
                     * 设置Whether it is a minimum scale switching.
                     * @param _minimalConversion Whether it is a minimum scale switching.
                     * 
                     */
                    void SetMinimalConversion(const bool& _minimalConversion);

                    /**
                     * 判断参数 MinimalConversion 是否已赋值
                     * @return MinimalConversion 是否已赋值
                     * 
                     */
                    bool MinimalConversionHasBeenSet() const;

                    /**
                     * 获取Whether it is pre-check only.
                     * @return DryRun Whether it is pre-check only.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether it is pre-check only.
                     * @param _dryRun Whether it is pre-check only.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取Target operating system type for switching. Only TencentOS is supported.
                     * @return TargetOSType Target operating system type for switching. Only TencentOS is supported.
                     * 
                     */
                    std::string GetTargetOSType() const;

                    /**
                     * 设置Target operating system type for switching. Only TencentOS is supported.
                     * @param _targetOSType Target operating system type for switching. Only TencentOS is supported.
                     * 
                     */
                    void SetTargetOSType(const std::string& _targetOSType);

                    /**
                     * 判断参数 TargetOSType 是否已赋值
                     * @return TargetOSType 是否已赋值
                     * 
                     */
                    bool TargetOSTypeHasBeenSet() const;

                private:

                    /**
                     * ID of an instance to execute operating system switching.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether it is a minimum scale switching.
                     */
                    bool m_minimalConversion;
                    bool m_minimalConversionHasBeenSet;

                    /**
                     * Whether it is pre-check only.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * Target operating system type for switching. Only TencentOS is supported.
                     */
                    std::string m_targetOSType;
                    bool m_targetOSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CONVERTOPERATINGSYSTEMSREQUEST_H_
