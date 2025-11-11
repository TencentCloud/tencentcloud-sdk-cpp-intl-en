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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_BINDNUMBERCALLININTERFACEREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_BINDNUMBERCALLININTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Interface.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * BindNumberCallInInterface request structure.
                */
                class BindNumberCallInInterfaceRequest : public AbstractModel
                {
                public:
                    BindNumberCallInInterfaceRequest();
                    ~BindNumberCallInInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Number to be bound.
                     * @return Number Number to be bound.
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置Number to be bound.
                     * @param _number Number to be bound.
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取Specifies the callback url to be bound.
                     * @return CallInInterface Specifies the callback url to be bound.
                     * 
                     */
                    Interface GetCallInInterface() const;

                    /**
                     * 设置Specifies the callback url to be bound.
                     * @param _callInInterface Specifies the callback url to be bound.
                     * 
                     */
                    void SetCallInInterface(const Interface& _callInInterface);

                    /**
                     * 判断参数 CallInInterface 是否已赋值
                     * @return CallInInterface 是否已赋值
                     * 
                     */
                    bool CallInInterfaceHasBeenSet() const;

                    /**
                     * 获取Bind number type. specifies the type of the bind number. inner: internal number | number: line number.
                     * @return NumberType Bind number type. specifies the type of the bind number. inner: internal number | number: line number.
                     * 
                     */
                    std::string GetNumberType() const;

                    /**
                     * 设置Bind number type. specifies the type of the bind number. inner: internal number | number: line number.
                     * @param _numberType Bind number type. specifies the type of the bind number. inner: internal number | number: line number.
                     * 
                     */
                    void SetNumberType(const std::string& _numberType);

                    /**
                     * 判断参数 NumberType 是否已赋值
                     * @return NumberType 是否已赋值
                     * 
                     */
                    bool NumberTypeHasBeenSet() const;

                private:

                    /**
                     * App ID (required). can be used to view https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Number to be bound.
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * Specifies the callback url to be bound.
                     */
                    Interface m_callInInterface;
                    bool m_callInInterfaceHasBeenSet;

                    /**
                     * Bind number type. specifies the type of the bind number. inner: internal number | number: line number.
                     */
                    std::string m_numberType;
                    bool m_numberTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_BINDNUMBERCALLININTERFACEREQUEST_H_
