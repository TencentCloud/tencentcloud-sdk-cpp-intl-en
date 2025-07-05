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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PARAMRECORD_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PARAMRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Parameter modification records
                */
                class ParamRecord : public AbstractModel
                {
                public:
                    ParamRecord();
                    ~ParamRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Parameter name
                     * @return ParamName Parameter name
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
                     * @param _paramName Parameter name
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Parameter value before modification
                     * @return OldValue Parameter value before modification
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置Parameter value before modification
                     * @param _oldValue Parameter value before modification
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取Parameter value after modification
                     * @return NewValue Parameter value after modification
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置Parameter value after modification
                     * @param _newValue Parameter value after modification
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取Whether the parameter is modified successfully
                     * @return IsSucess Whether the parameter is modified successfully
                     * @deprecated
                     */
                    bool GetIsSucess() const;

                    /**
                     * 设置Whether the parameter is modified successfully
                     * @param _isSucess Whether the parameter is modified successfully
                     * @deprecated
                     */
                    void SetIsSucess(const bool& _isSucess);

                    /**
                     * 判断参数 IsSucess 是否已赋值
                     * @return IsSucess 是否已赋值
                     * @deprecated
                     */
                    bool IsSucessHasBeenSet() const;

                    /**
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Indicates whether the parameter is modified successfully.
                     * @return IsSuccess Indicates whether the parameter is modified successfully.
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 设置Indicates whether the parameter is modified successfully.
                     * @param _isSuccess Indicates whether the parameter is modified successfully.
                     * 
                     */
                    void SetIsSuccess(const bool& _isSuccess);

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Parameter value before modification
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * Parameter value after modification
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * Whether the parameter is modified successfully
                     */
                    bool m_isSucess;
                    bool m_isSucessHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Indicates whether the parameter is modified successfully.
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PARAMRECORD_H_
