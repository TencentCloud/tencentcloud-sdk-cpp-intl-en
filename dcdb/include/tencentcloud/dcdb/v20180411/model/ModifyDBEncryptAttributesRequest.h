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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyDBEncryptAttributes request structure.
                */
                class ModifyDBEncryptAttributesRequest : public AbstractModel
                {
                public:
                    ModifyDBEncryptAttributesRequest();
                    ~ModifyDBEncryptAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of `tdsqlshard-ow728lmc`
                     * @return InstanceId Instance ID in the format of `tdsqlshard-ow728lmc`
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of `tdsqlshard-ow728lmc`
                     * @param InstanceId Instance ID in the format of `tdsqlshard-ow728lmc`
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the data encryption (Once enabled, it can’t be disabled). Valid values: `1` (Yes), `0` (No. Default).
                     * @return EncryptEnabled Whether to enable the data encryption (Once enabled, it can’t be disabled). Valid values: `1` (Yes), `0` (No. Default).
                     */
                    int64_t GetEncryptEnabled() const;

                    /**
                     * 设置Whether to enable the data encryption (Once enabled, it can’t be disabled). Valid values: `1` (Yes), `0` (No. Default).
                     * @param EncryptEnabled Whether to enable the data encryption (Once enabled, it can’t be disabled). Valid values: `1` (Yes), `0` (No. Default).
                     */
                    void SetEncryptEnabled(const int64_t& _encryptEnabled);

                    /**
                     * 判断参数 EncryptEnabled 是否已赋值
                     * @return EncryptEnabled 是否已赋值
                     */
                    bool EncryptEnabledHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `tdsqlshard-ow728lmc`
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to enable the data encryption (Once enabled, it can’t be disabled). Valid values: `1` (Yes), `0` (No. Default).
                     */
                    int64_t m_encryptEnabled;
                    bool m_encryptEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBENCRYPTATTRIBUTESREQUEST_H_
