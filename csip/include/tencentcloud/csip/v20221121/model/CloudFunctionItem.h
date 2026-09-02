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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDFUNCTIONITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDFUNCTIONITEM_H_

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
                * Cloud function
                */
                class CloudFunctionItem : public AbstractModel
                {
                public:
                    CloudFunctionItem();
                    ~CloudFunctionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud function name
                     * @return InstanceName Cloud function name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Cloud function name
                     * @param _instanceName Cloud function name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Function status
                     * @return InstanceStatus Function status
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Function status
                     * @param _instanceStatus Function status
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Cloud function type
                     * @return FunctionType Cloud function type
                     * 
                     */
                    std::string GetFunctionType() const;

                    /**
                     * 设置Cloud function type
                     * @param _functionType Cloud function type
                     * 
                     */
                    void SetFunctionType(const std::string& _functionType);

                    /**
                     * 判断参数 FunctionType 是否已赋值
                     * @return FunctionType 是否已赋值
                     * 
                     */
                    bool FunctionTypeHasBeenSet() const;

                    /**
                     * 获取Resource tag
                     * @return InstanceTag Resource tag
                     * 
                     */
                    std::string GetInstanceTag() const;

                    /**
                     * 设置Resource tag
                     * @param _instanceTag Resource tag
                     * 
                     */
                    void SetInstanceTag(const std::string& _instanceTag);

                    /**
                     * 判断参数 InstanceTag 是否已赋值
                     * @return InstanceTag 是否已赋值
                     * 
                     */
                    bool InstanceTagHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param _namespace Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Region.
                     * @return Region Region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
                     * @param _region Region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Custom domain name
                     * @return Domain Custom domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Custom domain name
                     * @param _domain Custom domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceID Instance ID.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceID Instance ID.
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return InstanceType Instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type
                     * @param _instanceType Instance type
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return AppID Tenant ID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置Tenant ID
                     * @param _appID Tenant ID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Displayed content of function status
                     * @return InstanceStatusDisplay Displayed content of function status
                     * 
                     */
                    std::string GetInstanceStatusDisplay() const;

                    /**
                     * 设置Displayed content of function status
                     * @param _instanceStatusDisplay Displayed content of function status
                     * 
                     */
                    void SetInstanceStatusDisplay(const std::string& _instanceStatusDisplay);

                    /**
                     * 判断参数 InstanceStatusDisplay 是否已赋值
                     * @return InstanceStatusDisplay 是否已赋值
                     * 
                     */
                    bool InstanceStatusDisplayHasBeenSet() const;

                    /**
                     * 获取Core asset tag
                     * @return CoreAssetFlag Core asset tag
                     * 
                     */
                    std::string GetCoreAssetFlag() const;

                    /**
                     * 设置Core asset tag
                     * @param _coreAssetFlag Core asset tag
                     * 
                     */
                    void SetCoreAssetFlag(const std::string& _coreAssetFlag);

                    /**
                     * 判断参数 CoreAssetFlag 是否已赋值
                     * @return CoreAssetFlag 是否已赋值
                     * 
                     */
                    bool CoreAssetFlagHasBeenSet() const;

                    /**
                     * 获取Public network access URL
                     * @return PublicURL Public network access URL
                     * 
                     */
                    std::string GetPublicURL() const;

                    /**
                     * 设置Public network access URL
                     * @param _publicURL Public network access URL
                     * 
                     */
                    void SetPublicURL(const std::string& _publicURL);

                    /**
                     * 判断参数 PublicURL 是否已赋值
                     * @return PublicURL 是否已赋值
                     * 
                     */
                    bool PublicURLHasBeenSet() const;

                    /**
                     * 获取VPC access URL
                     * @return PrivateURL VPC access URL
                     * 
                     */
                    std::string GetPrivateURL() const;

                    /**
                     * 设置VPC access URL
                     * @param _privateURL VPC access URL
                     * 
                     */
                    void SetPrivateURL(const std::string& _privateURL);

                    /**
                     * 判断参数 PrivateURL 是否已赋值
                     * @return PrivateURL 是否已赋值
                     * 
                     */
                    bool PrivateURLHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return AccountInfo Account
                     * 
                     */
                    std::string GetAccountInfo() const;

                    /**
                     * 设置Account
                     * @param _accountInfo Account
                     * 
                     */
                    void SetAccountInfo(const std::string& _accountInfo);

                    /**
                     * 判断参数 AccountInfo 是否已赋值
                     * @return AccountInfo 是否已赋值
                     * 
                     */
                    bool AccountInfoHasBeenSet() const;

                private:

                    /**
                     * Cloud function name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Function status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Cloud function type
                     */
                    std::string m_functionType;
                    bool m_functionTypeHasBeenSet;

                    /**
                     * Resource tag
                     */
                    std::string m_instanceTag;
                    bool m_instanceTagHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Custom domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Displayed content of function status
                     */
                    std::string m_instanceStatusDisplay;
                    bool m_instanceStatusDisplayHasBeenSet;

                    /**
                     * Core asset tag
                     */
                    std::string m_coreAssetFlag;
                    bool m_coreAssetFlagHasBeenSet;

                    /**
                     * Public network access URL
                     */
                    std::string m_publicURL;
                    bool m_publicURLHasBeenSet;

                    /**
                     * VPC access URL
                     */
                    std::string m_privateURL;
                    bool m_privateURLHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_accountInfo;
                    bool m_accountInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDFUNCTIONITEM_H_
