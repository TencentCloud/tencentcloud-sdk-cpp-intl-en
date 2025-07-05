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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/EnhancedService.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ResetInstances request structure.
                */
                class ResetInstancesRequest : public AbstractModel
                {
                public:
                    ResetInstancesRequest();
                    ~ResetInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the instances to be reinstalled.
                     * @return InstanceIdSet List of IDs of the instances to be reinstalled.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置List of IDs of the instances to be reinstalled.
                     * @param _instanceIdSet List of IDs of the instances to be reinstalled.
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取ID of the image from which to install the instance. If this parameter is not specified, the current image of the instance will be used.
                     * @return ImageId ID of the image from which to install the instance. If this parameter is not specified, the current image of the instance will be used.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置ID of the image from which to install the instance. If this parameter is not specified, the current image of the instance will be used.
                     * @param _imageId ID of the image from which to install the instance. If this parameter is not specified, the current image of the instance will be used.
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Password. If this parameter is not specified, the password will be subsequently displayed in the Message Center.
                     * @return Password Password. If this parameter is not specified, the password will be subsequently displayed in the Message Center.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password. If this parameter is not specified, the password will be subsequently displayed in the Message Center.
                     * @param _password Password. If this parameter is not specified, the password will be subsequently displayed in the Message Center.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Whether to enable CM and CWP. If this parameter is not specified, they will be enabled by default.
                     * @return EnhancedService Whether to enable CM and CWP. If this parameter is not specified, they will be enabled by default.
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置Whether to enable CM and CWP. If this parameter is not specified, they will be enabled by default.
                     * @param _enhancedService Whether to enable CM and CWP. If this parameter is not specified, they will be enabled by default.
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取Whether to retain the data on the data disk. Valid values: true, false. Default value: true
                     * @return KeepData Whether to retain the data on the data disk. Valid values: true, false. Default value: true
                     * 
                     */
                    std::string GetKeepData() const;

                    /**
                     * 设置Whether to retain the data on the data disk. Valid values: true, false. Default value: true
                     * @param _keepData Whether to retain the data on the data disk. Valid values: true, false. Default value: true
                     * 
                     */
                    void SetKeepData(const std::string& _keepData);

                    /**
                     * 判断参数 KeepData 是否已赋值
                     * @return KeepData 是否已赋值
                     * 
                     */
                    bool KeepDataHasBeenSet() const;

                    /**
                     * 获取Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return KeepImageLogin Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeepImageLogin() const;

                    /**
                     * 设置Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _keepImageLogin Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeepImageLogin(const std::string& _keepImageLogin);

                    /**
                     * 判断参数 KeepImageLogin 是否已赋值
                     * @return KeepImageLogin 是否已赋值
                     * 
                     */
                    bool KeepImageLoginHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the instances to be reinstalled.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * ID of the image from which to install the instance. If this parameter is not specified, the current image of the instance will be used.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Password. If this parameter is not specified, the password will be subsequently displayed in the Message Center.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to enable CM and CWP. If this parameter is not specified, they will be enabled by default.
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * Whether to retain the data on the data disk. Valid values: true, false. Default value: true
                     */
                    std::string m_keepData;
                    bool m_keepDataHasBeenSet;

                    /**
                     * Whether to keep the original settings for the image. You cannot specify this parameter if `Password` or `KeyIds.N` is specified. You can specify this parameter as `TRUE` only when you create an instance by using a custom image, shared image, or image imported from an external resource. Valid values:
TRUE: yes
FALSE: no

Default value: FALSE.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keepImageLogin;
                    bool m_keepImageLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESREQUEST_H_
