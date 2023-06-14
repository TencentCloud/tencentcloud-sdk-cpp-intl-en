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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKRETURNABLE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKRETURNABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Details of the returnable cloud disk
                */
                class DiskReturnable : public AbstractModel
                {
                public:
                    DiskReturnable();
                    ~DiskReturnable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud disk ID.
                     * @return DiskId Cloud disk ID.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID.
                     * @param _diskId Cloud disk ID.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Whether the cloud disk can be returned.
                     * @return IsReturnable Whether the cloud disk can be returned.
                     * 
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 设置Whether the cloud disk can be returned.
                     * @param _isReturnable Whether the cloud disk can be returned.
                     * 
                     */
                    void SetIsReturnable(const bool& _isReturnable);

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     * 
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取Error code of cloud disk return failure.
                     * @return ReturnFailCode Error code of cloud disk return failure.
                     * 
                     */
                    int64_t GetReturnFailCode() const;

                    /**
                     * 设置Error code of cloud disk return failure.
                     * @param _returnFailCode Error code of cloud disk return failure.
                     * 
                     */
                    void SetReturnFailCode(const int64_t& _returnFailCode);

                    /**
                     * 判断参数 ReturnFailCode 是否已赋值
                     * @return ReturnFailCode 是否已赋值
                     * 
                     */
                    bool ReturnFailCodeHasBeenSet() const;

                    /**
                     * 获取Error message of cloud disk return failure.
                     * @return ReturnFailMessage Error message of cloud disk return failure.
                     * 
                     */
                    std::string GetReturnFailMessage() const;

                    /**
                     * 设置Error message of cloud disk return failure.
                     * @param _returnFailMessage Error message of cloud disk return failure.
                     * 
                     */
                    void SetReturnFailMessage(const std::string& _returnFailMessage);

                    /**
                     * 判断参数 ReturnFailMessage 是否已赋值
                     * @return ReturnFailMessage 是否已赋值
                     * 
                     */
                    bool ReturnFailMessageHasBeenSet() const;

                private:

                    /**
                     * Cloud disk ID.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Whether the cloud disk can be returned.
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * Error code of cloud disk return failure.
                     */
                    int64_t m_returnFailCode;
                    bool m_returnFailCodeHasBeenSet;

                    /**
                     * Error message of cloud disk return failure.
                     */
                    std::string m_returnFailMessage;
                    bool m_returnFailMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKRETURNABLE_H_
