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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMPERSONALIDENTIFYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMPERSONALIDENTIFYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmPersonalIdentify request structure.
                */
                class ModifyDspmPersonalIdentifyRequest : public AbstractModel
                {
                public:
                    ModifyDspmPersonalIdentifyRequest();
                    ~ModifyDspmPersonalIdentifyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity ID
                     * @return PersonId Identity ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Identity ID
                     * @param _personId Identity ID
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Phone Mobile number.
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Mobile number.
                     * @param _phone Mobile number.
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Identity ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMPERSONALIDENTIFYREQUEST_H_
