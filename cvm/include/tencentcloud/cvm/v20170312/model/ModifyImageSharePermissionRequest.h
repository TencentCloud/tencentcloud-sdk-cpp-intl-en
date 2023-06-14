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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyImageSharePermission request structure.
                */
                class ModifyImageSharePermissionRequest : public AbstractModel
                {
                public:
                    ModifyImageSharePermissionRequest();
                    ~ModifyImageSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>You can only specify an image in the `NORMAL` state. For more information on image states, see [here](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#image_state).
                     * @return ImageId Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>You can only specify an image in the `NORMAL` state. For more information on image states, see [here](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#image_state).
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>You can only specify an image in the `NORMAL` state. For more information on image states, see [here](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#image_state).
                     * @param _imageId Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>You can only specify an image in the `NORMAL` state. For more information on image states, see [here](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#image_state).
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
                     * 获取List of account IDs with which an image is shared. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). The account ID is different from the QQ number. You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer). 
                     * @return AccountIds List of account IDs with which an image is shared. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). The account ID is different from the QQ number. You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer). 
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置List of account IDs with which an image is shared. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). The account ID is different from the QQ number. You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer). 
                     * @param _accountIds List of account IDs with which an image is shared. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). The account ID is different from the QQ number. You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer). 
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                    /**
                     * 获取Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * @return Permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * @param _permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * Image ID such as `img-gvbnzy6f`. You can obtain the image IDs in two ways: <br><li>Call [DescribeImages](https://intl.cloud.tencent.com/document/api/213/15715?from_cn_redirect=1) and look for `ImageId` in the response. <br><li>Look for the information in the [Image Console](https://console.cloud.tencent.com/cvm/image). <br>You can only specify an image in the `NORMAL` state. For more information on image states, see [here](https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#image_state).
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * List of account IDs with which an image is shared. For the format of array-type parameters, see [API Introduction](https://intl.cloud.tencent.com/document/api/213/568?from_cn_redirect=1). The account ID is different from the QQ number. You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer). 
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                    /**
                     * Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling an image sharing. 
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYIMAGESHAREPERMISSIONREQUEST_H_
