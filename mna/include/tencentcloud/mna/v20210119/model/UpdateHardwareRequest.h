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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEHARDWAREREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEHARDWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateHardware request structure.
                */
                class UpdateHardwareRequest : public AbstractModel
                {
                public:
                    UpdateHardwareRequest();
                    ~UpdateHardwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Hardware ID
                     * @return HardwareId Hardware ID
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置Hardware ID
                     * @param _hardwareId Hardware ID
                     * 
                     */
                    void SetHardwareId(const std::string& _hardwareId);

                    /**
                     * 判断参数 HardwareId 是否已赋值
                     * @return HardwareId 是否已赋值
                     * 
                     */
                    bool HardwareIdHasBeenSet() const;

                    /**
                     * 获取Hardware Serial Number
                     * @return SN Hardware Serial Number
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置Hardware Serial Number
                     * @param _sN Hardware Serial Number
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取device Remarks
                     * @return Description device Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置device Remarks
                     * @param _description device Remarks
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Hardware ID
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                    /**
                     * Hardware Serial Number
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * device Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEHARDWAREREQUEST_H_
