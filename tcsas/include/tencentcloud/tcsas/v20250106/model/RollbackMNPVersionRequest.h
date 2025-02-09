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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_ROLLBACKMNPVERSIONREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_ROLLBACKMNPVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * RollbackMNPVersion request structure.
                */
                class RollbackMNPVersionRequest : public AbstractModel
                {
                public:
                    RollbackMNPVersionRequest();
                    ~RollbackMNPVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program ID
                     * @return MNPId Mini program ID
                     * 
                     */
                    std::string GetMNPId() const;

                    /**
                     * 设置Mini program ID
                     * @param _mNPId Mini program ID
                     * 
                     */
                    void SetMNPId(const std::string& _mNPId);

                    /**
                     * 判断参数 MNPId 是否已赋值
                     * @return MNPId 是否已赋值
                     * 
                     */
                    bool MNPIdHasBeenSet() const;

                    /**
                     * 获取Mini program version ID
                     * @return MNPVersionId Mini program version ID
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Mini program version ID
                     * @param _mNPVersionId Mini program version ID
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取Mini program version number
                     * @return MNPVersion Mini program version number
                     * 
                     */
                    std::string GetMNPVersion() const;

                    /**
                     * 设置Mini program version number
                     * @param _mNPVersion Mini program version number
                     * 
                     */
                    void SetMNPVersion(const std::string& _mNPVersion);

                    /**
                     * 判断参数 MNPVersion 是否已赋值
                     * @return MNPVersion 是否已赋值
                     * 
                     */
                    bool MNPVersionHasBeenSet() const;

                private:

                    /**
                     * Mini program ID
                     */
                    std::string m_mNPId;
                    bool m_mNPIdHasBeenSet;

                    /**
                     * Mini program version ID
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * Mini program version number
                     */
                    std::string m_mNPVersion;
                    bool m_mNPVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_ROLLBACKMNPVERSIONREQUEST_H_
