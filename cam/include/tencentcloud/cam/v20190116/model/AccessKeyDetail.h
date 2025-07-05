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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_ACCESSKEYDETAIL_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_ACCESSKEYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Access key
                */
                class AccessKeyDetail : public AbstractModel
                {
                public:
                    AccessKeyDetail();
                    ~AccessKeyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access key ID
                     * @return AccessKeyId Access key ID
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Access key ID
                     * @param _accessKeyId Access key ID
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Access key, which is visible only when it is created. Keep it properly.
                     * @return SecretAccessKey Access key, which is visible only when it is created. Keep it properly.
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置Access key, which is visible only when it is created. Keep it properly.
                     * @param _secretAccessKey Access key, which is visible only when it is created. Keep it properly.
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * @return Status Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * @param _status Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Access key ID
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Access key, which is visible only when it is created. Keep it properly.
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * Key status. Valid values: `Active` (activated), `Inactive` (not activated).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_ACCESSKEYDETAIL_H_
