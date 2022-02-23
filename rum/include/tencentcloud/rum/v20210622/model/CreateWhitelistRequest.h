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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateWhitelist request structure.
                */
                class CreateWhitelistRequest : public AbstractModel
                {
                public:
                    CreateWhitelistRequest();
                    ~CreateWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as taw-123
                     * @return InstanceID Instance ID, such as taw-123
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID, such as taw-123
                     * @param InstanceID Instance ID, such as taw-123
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param Remark Remarks
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取uin: business identifier
                     * @return WhitelistUin uin: business identifier
                     */
                    std::string GetWhitelistUin() const;

                    /**
                     * 设置uin: business identifier
                     * @param WhitelistUin uin: business identifier
                     */
                    void SetWhitelistUin(const std::string& _whitelistUin);

                    /**
                     * 判断参数 WhitelistUin 是否已赋值
                     * @return WhitelistUin 是否已赋值
                     */
                    bool WhitelistUinHasBeenSet() const;

                    /**
                     * 获取Business identifier
                     * @return Aid Business identifier
                     */
                    std::string GetAid() const;

                    /**
                     * 设置Business identifier
                     * @param Aid Business identifier
                     */
                    void SetAid(const std::string& _aid);

                    /**
                     * 判断参数 Aid 是否已赋值
                     * @return Aid 是否已赋值
                     */
                    bool AidHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as taw-123
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * uin: business identifier
                     */
                    std::string m_whitelistUin;
                    bool m_whitelistUinHasBeenSet;

                    /**
                     * Business identifier
                     */
                    std::string m_aid;
                    bool m_aidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATEWHITELISTREQUEST_H_
