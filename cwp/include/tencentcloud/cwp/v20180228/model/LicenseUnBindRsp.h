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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEUNBINDRSP_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEUNBINDRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Authorization unbinding information.
                */
                class LicenseUnBindRsp : public AbstractModel
                {
                public:
                    LicenseUnBindRsp();
                    ~LicenseUnBindRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取QUUID CVM uuid, lightweight server uuid, edge computing uuid
                     * @return Quuid QUUID CVM uuid, lightweight server uuid, edge computing uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置QUUID CVM uuid, lightweight server uuid, edge computing uuid
                     * @param _quuid QUUID CVM uuid, lightweight server uuid, edge computing uuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return ErrMsg Reason for failure
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Reason for failure
                     * @param _errMsg Reason for failure
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * QUUID CVM uuid, lightweight server uuid, edge computing uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEUNBINDRSP_H_
