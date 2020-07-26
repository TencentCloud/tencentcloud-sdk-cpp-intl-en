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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_ADDSIGNSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_ADDSIGNSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * Signature addition response 
                */
                class AddSignStatus : public AbstractModel
                {
                public:
                    AddSignStatus();
                    ~AddSignStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Signature ID.
                     * @return SignId Signature ID.
                     */
                    uint64_t GetSignId() const;

                    /**
                     * 设置Signature ID.
                     * @param SignId Signature ID.
                     */
                    void SetSignId(const uint64_t& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取Signature application ID.
                     * @return SignApplyId Signature application ID.
                     */
                    uint64_t GetSignApplyId() const;

                    /**
                     * 设置Signature application ID.
                     * @param SignApplyId Signature application ID.
                     */
                    void SetSignApplyId(const uint64_t& _signApplyId);

                    /**
                     * 判断参数 SignApplyId 是否已赋值
                     * @return SignApplyId 是否已赋值
                     */
                    bool SignApplyIdHasBeenSet() const;

                private:

                    /**
                     * Signature ID.
                     */
                    uint64_t m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * Signature application ID.
                     */
                    uint64_t m_signApplyId;
                    bool m_signApplyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_ADDSIGNSTATUS_H_
