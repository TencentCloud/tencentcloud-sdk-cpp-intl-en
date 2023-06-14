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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEUSERSAMLCONFIGREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEUSERSAMLCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdateUserSAMLConfig request structure.
                */
                class UpdateUserSAMLConfigRequest : public AbstractModel
                {
                public:
                    UpdateUserSAMLConfigRequest();
                    ~UpdateUserSAMLConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type of the modification operation. `enable`: enable, `disable`: disable, `updateSAML`: modify metadata document.
                     * @return Operate Type of the modification operation. `enable`: enable, `disable`: disable, `updateSAML`: modify metadata document.
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置Type of the modification operation. `enable`: enable, `disable`: disable, `updateSAML`: modify metadata document.
                     * @param _operate Type of the modification operation. `enable`: enable, `disable`: disable, `updateSAML`: modify metadata document.
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取Metadata document, which must be Base64 encoded. This parameter is required only when the value of `Operate` is `updateSAML`.
                     * @return SAMLMetadataDocument Metadata document, which must be Base64 encoded. This parameter is required only when the value of `Operate` is `updateSAML`.
                     * 
                     */
                    std::string GetSAMLMetadataDocument() const;

                    /**
                     * 设置Metadata document, which must be Base64 encoded. This parameter is required only when the value of `Operate` is `updateSAML`.
                     * @param _sAMLMetadataDocument Metadata document, which must be Base64 encoded. This parameter is required only when the value of `Operate` is `updateSAML`.
                     * 
                     */
                    void SetSAMLMetadataDocument(const std::string& _sAMLMetadataDocument);

                    /**
                     * 判断参数 SAMLMetadataDocument 是否已赋值
                     * @return SAMLMetadataDocument 是否已赋值
                     * 
                     */
                    bool SAMLMetadataDocumentHasBeenSet() const;

                private:

                    /**
                     * Type of the modification operation. `enable`: enable, `disable`: disable, `updateSAML`: modify metadata document.
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * Metadata document, which must be Base64 encoded. This parameter is required only when the value of `Operate` is `updateSAML`.
                     */
                    std::string m_sAMLMetadataDocument;
                    bool m_sAMLMetadataDocumentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEUSERSAMLCONFIGREQUEST_H_
