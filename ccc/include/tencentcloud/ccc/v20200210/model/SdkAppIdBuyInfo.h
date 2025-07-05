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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SDKAPPIDBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SDKAPPIDBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/StaffBuyInfo.h>
#include <tencentcloud/ccc/v20200210/model/PhoneNumBuyInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Application purchase information.
                */
                class SdkAppIdBuyInfo : public AbstractModel
                {
                public:
                    SdkAppIdBuyInfo();
                    ~SdkAppIdBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application id.
                     * @return SdkAppId Application id.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置Application id.
                     * @param _sdkAppId Application id.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Application name.
                     * @return Name Application name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Application name.
                     * @param _name Application name.
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
                     * 获取Agent purchase count (still within the validity period).
                     * @return StaffBuyNum Agent purchase count (still within the validity period).
                     * 
                     */
                    int64_t GetStaffBuyNum() const;

                    /**
                     * 设置Agent purchase count (still within the validity period).
                     * @param _staffBuyNum Agent purchase count (still within the validity period).
                     * 
                     */
                    void SetStaffBuyNum(const int64_t& _staffBuyNum);

                    /**
                     * 判断参数 StaffBuyNum 是否已赋值
                     * @return StaffBuyNum 是否已赋值
                     * 
                     */
                    bool StaffBuyNumHasBeenSet() const;

                    /**
                     * 获取Agent purchase list (still within the validity period).
                     * @return StaffBuyList Agent purchase list (still within the validity period).
                     * 
                     */
                    std::vector<StaffBuyInfo> GetStaffBuyList() const;

                    /**
                     * 设置Agent purchase list (still within the validity period).
                     * @param _staffBuyList Agent purchase list (still within the validity period).
                     * 
                     */
                    void SetStaffBuyList(const std::vector<StaffBuyInfo>& _staffBuyList);

                    /**
                     * 判断参数 StaffBuyList 是否已赋值
                     * @return StaffBuyList 是否已赋值
                     * 
                     */
                    bool StaffBuyListHasBeenSet() const;

                    /**
                     * 获取List of numbers purchased.
                     * @return PhoneNumBuyList List of numbers purchased.
                     * 
                     */
                    std::vector<PhoneNumBuyInfo> GetPhoneNumBuyList() const;

                    /**
                     * 设置List of numbers purchased.
                     * @param _phoneNumBuyList List of numbers purchased.
                     * 
                     */
                    void SetPhoneNumBuyList(const std::vector<PhoneNumBuyInfo>& _phoneNumBuyList);

                    /**
                     * 判断参数 PhoneNumBuyList 是否已赋值
                     * @return PhoneNumBuyList 是否已赋值
                     * 
                     */
                    bool PhoneNumBuyListHasBeenSet() const;

                    /**
                     * 获取Number of office telephones purchased (still within the validity period).
                     * @return SipBuyNum Number of office telephones purchased (still within the validity period).
                     * 
                     */
                    int64_t GetSipBuyNum() const;

                    /**
                     * 设置Number of office telephones purchased (still within the validity period).
                     * @param _sipBuyNum Number of office telephones purchased (still within the validity period).
                     * 
                     */
                    void SetSipBuyNum(const int64_t& _sipBuyNum);

                    /**
                     * 判断参数 SipBuyNum 是否已赋值
                     * @return SipBuyNum 是否已赋值
                     * 
                     */
                    bool SipBuyNumHasBeenSet() const;

                private:

                    /**
                     * Application id.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent purchase count (still within the validity period).
                     */
                    int64_t m_staffBuyNum;
                    bool m_staffBuyNumHasBeenSet;

                    /**
                     * Agent purchase list (still within the validity period).
                     */
                    std::vector<StaffBuyInfo> m_staffBuyList;
                    bool m_staffBuyListHasBeenSet;

                    /**
                     * List of numbers purchased.
                     */
                    std::vector<PhoneNumBuyInfo> m_phoneNumBuyList;
                    bool m_phoneNumBuyListHasBeenSet;

                    /**
                     * Number of office telephones purchased (still within the validity period).
                     */
                    int64_t m_sipBuyNum;
                    bool m_sipBuyNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SDKAPPIDBUYINFO_H_
