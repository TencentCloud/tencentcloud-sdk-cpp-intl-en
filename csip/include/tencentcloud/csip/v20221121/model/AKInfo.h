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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AK brief information.
                */
                class AKInfo : public AbstractModel
                {
                public:
                    AKInfo();
                    ~AKInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ak id.
                     * @return ID ak id.
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置ak id.
                     * @param _iD ak id.
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取ak specific value. returns temporary key when temporary key is used.
                     * @return Name ak specific value. returns temporary key when temporary key is used.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置ak specific value. returns temporary key when temporary key is used.
                     * @param _name ak specific value. returns temporary key when temporary key is used.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Associated account.
                     * @return User Associated account.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Associated account.
                     * @param _user Associated account.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

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
                     * ak id.
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * ak specific value. returns temporary key when temporary key is used.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Associated account.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

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

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AKINFO_H_
