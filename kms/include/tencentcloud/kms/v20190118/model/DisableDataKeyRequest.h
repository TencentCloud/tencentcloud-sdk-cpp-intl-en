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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DISABLEDATAKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DISABLEDATAKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DisableDataKey request structure.
                */
                class DisableDataKeyRequest : public AbstractModel
                {
                public:
                    DisableDataKeyRequest();
                    ~DisableDataKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the unique identifier of the data key.
                     * @return DataKeyId Specifies the unique identifier of the data key.
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置Specifies the unique identifier of the data key.
                     * @param _dataKeyId Specifies the unique identifier of the data key.
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                private:

                    /**
                     * Specifies the unique identifier of the data key.
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DISABLEDATAKEYREQUEST_H_
