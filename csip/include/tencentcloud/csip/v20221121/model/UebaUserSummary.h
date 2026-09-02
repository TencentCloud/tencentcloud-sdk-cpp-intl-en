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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UebaUserSummaryElement.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * User behavior analysis - user overview information
                */
                class UebaUserSummary : public AbstractModel
                {
                public:
                    UebaUserSummary();
                    ~UebaUserSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quantity of all users
                     * @return AllUserCount Quantity of all users
                     * 
                     */
                    uint64_t GetAllUserCount() const;

                    /**
                     * 设置Quantity of all users
                     * @param _allUserCount Quantity of all users
                     * 
                     */
                    void SetAllUserCount(const uint64_t& _allUserCount);

                    /**
                     * 判断参数 AllUserCount 是否已赋值
                     * @return AllUserCount 是否已赋值
                     * 
                     */
                    bool AllUserCountHasBeenSet() const;

                    /**
                     * 获取Number of abnormal users
                     * @return AbnormalUserCount Number of abnormal users
                     * 
                     */
                    uint64_t GetAbnormalUserCount() const;

                    /**
                     * 设置Number of abnormal users
                     * @param _abnormalUserCount Number of abnormal users
                     * 
                     */
                    void SetAbnormalUserCount(const uint64_t& _abnormalUserCount);

                    /**
                     * 判断参数 AbnormalUserCount 是否已赋值
                     * @return AbnormalUserCount 是否已赋值
                     * 
                     */
                    bool AbnormalUserCountHasBeenSet() const;

                    /**
                     * 获取Number of users for the cloud account
                     * @return UserCount Number of users for the cloud account
                     * 
                     */
                    uint64_t GetUserCount() const;

                    /**
                     * 设置Number of users for the cloud account
                     * @param _userCount Number of users for the cloud account
                     * 
                     */
                    void SetUserCount(const uint64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取Number of sub-users
                     * @return SubUserCount Number of sub-users
                     * 
                     */
                    uint64_t GetSubUserCount() const;

                    /**
                     * 设置Number of sub-users
                     * @param _subUserCount Number of sub-users
                     * 
                     */
                    void SetSubUserCount(const uint64_t& _subUserCount);

                    /**
                     * 判断参数 SubUserCount 是否已赋值
                     * @return SubUserCount 是否已赋值
                     * 
                     */
                    bool SubUserCountHasBeenSet() const;

                    /**
                     * 获取Number of custom users
                     * @return CustomUserCount Number of custom users
                     * 
                     */
                    uint64_t GetCustomUserCount() const;

                    /**
                     * 设置Number of custom users
                     * @param _customUserCount Number of custom users
                     * 
                     */
                    void SetCustomUserCount(const uint64_t& _customUserCount);

                    /**
                     * 判断参数 CustomUserCount 是否已赋值
                     * @return CustomUserCount 是否已赋值
                     * 
                     */
                    bool CustomUserCountHasBeenSet() const;

                    /**
                     * 获取Custom user sum building block
                     * @return Element Custom user sum building block
                     * 
                     */
                    std::vector<UebaUserSummaryElement> GetElement() const;

                    /**
                     * 设置Custom user sum building block
                     * @param _element Custom user sum building block
                     * 
                     */
                    void SetElement(const std::vector<UebaUserSummaryElement>& _element);

                    /**
                     * 判断参数 Element 是否已赋值
                     * @return Element 是否已赋值
                     * 
                     */
                    bool ElementHasBeenSet() const;

                private:

                    /**
                     * Quantity of all users
                     */
                    uint64_t m_allUserCount;
                    bool m_allUserCountHasBeenSet;

                    /**
                     * Number of abnormal users
                     */
                    uint64_t m_abnormalUserCount;
                    bool m_abnormalUserCountHasBeenSet;

                    /**
                     * Number of users for the cloud account
                     */
                    uint64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * Number of sub-users
                     */
                    uint64_t m_subUserCount;
                    bool m_subUserCountHasBeenSet;

                    /**
                     * Number of custom users
                     */
                    uint64_t m_customUserCount;
                    bool m_customUserCountHasBeenSet;

                    /**
                     * Custom user sum building block
                     */
                    std::vector<UebaUserSummaryElement> m_element;
                    bool m_elementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBAUSERSUMMARY_H_
