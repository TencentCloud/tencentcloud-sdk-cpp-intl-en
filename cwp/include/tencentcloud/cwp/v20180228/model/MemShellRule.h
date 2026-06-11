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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MEMSHELLRULE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MEMSHELLRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/UuidHostip.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Java Webshell allowlist rule.
                */
                class MemShellRule : public AbstractModel
                {
                public:
                    MemShellRule();
                    ~MemShellRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return Id Rule ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID
                     * @param _id Rule ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Client ID
                     * @return UuidHostips Client ID
                     * 
                     */
                    std::vector<UuidHostip> GetUuidHostips() const;

                    /**
                     * 设置Client ID
                     * @param _uuidHostips Client ID
                     * 
                     */
                    void SetUuidHostips(const std::vector<UuidHostip>& _uuidHostips);

                    /**
                     * 判断参数 UuidHostips 是否已赋值
                     * @return UuidHostips 是否已赋值
                     * 
                     */
                    bool UuidHostipsHasBeenSet() const;

                    /**
                     * 获取Logical operator. 0: 5 valid regular expression logical ANDs; 1: logical OR.
                     * @return LogicalSymbol Logical operator. 0: 5 valid regular expression logical ANDs; 1: logical OR.
                     * 
                     */
                    uint64_t GetLogicalSymbol() const;

                    /**
                     * 设置Logical operator. 0: 5 valid regular expression logical ANDs; 1: logical OR.
                     * @param _logicalSymbol Logical operator. 0: 5 valid regular expression logical ANDs; 1: logical OR.
                     * 
                     */
                    void SetLogicalSymbol(const uint64_t& _logicalSymbol);

                    /**
                     * 判断参数 LogicalSymbol 是否已赋值
                     * @return LogicalSymbol 是否已赋值
                     * 
                     */
                    bool LogicalSymbolHasBeenSet() const;

                    /**
                     * 获取Class name regular expression, which is not matched if empty.
                     * @return ClassNameRegexp Class name regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetClassNameRegexp() const;

                    /**
                     * 设置Class name regular expression, which is not matched if empty.
                     * @param _classNameRegexp Class name regular expression, which is not matched if empty.
                     * 
                     */
                    void SetClassNameRegexp(const std::string& _classNameRegexp);

                    /**
                     * 判断参数 ClassNameRegexp 是否已赋值
                     * @return ClassNameRegexp 是否已赋值
                     * 
                     */
                    bool ClassNameRegexpHasBeenSet() const;

                    /**
                     * 获取Parent class name regular expression, which is not matched if empty.
                     * @return SuperClassNameRegexp Parent class name regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetSuperClassNameRegexp() const;

                    /**
                     * 设置Parent class name regular expression, which is not matched if empty.
                     * @param _superClassNameRegexp Parent class name regular expression, which is not matched if empty.
                     * 
                     */
                    void SetSuperClassNameRegexp(const std::string& _superClassNameRegexp);

                    /**
                     * 判断参数 SuperClassNameRegexp 是否已赋值
                     * @return SuperClassNameRegexp 是否已赋值
                     * 
                     */
                    bool SuperClassNameRegexpHasBeenSet() const;

                    /**
                     * 获取Inherited interface regular expression, which is not matched if empty.
                     * @return InterfacesRegexp Inherited interface regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetInterfacesRegexp() const;

                    /**
                     * 设置Inherited interface regular expression, which is not matched if empty.
                     * @param _interfacesRegexp Inherited interface regular expression, which is not matched if empty.
                     * 
                     */
                    void SetInterfacesRegexp(const std::string& _interfacesRegexp);

                    /**
                     * 判断参数 InterfacesRegexp 是否已赋值
                     * @return InterfacesRegexp 是否已赋值
                     * 
                     */
                    bool InterfacesRegexpHasBeenSet() const;

                    /**
                     * 获取Annotation regular expression, which is not matched if empty.
                     * @return AnnotationsRegexp Annotation regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetAnnotationsRegexp() const;

                    /**
                     * 设置Annotation regular expression, which is not matched if empty.
                     * @param _annotationsRegexp Annotation regular expression, which is not matched if empty.
                     * 
                     */
                    void SetAnnotationsRegexp(const std::string& _annotationsRegexp);

                    /**
                     * 判断参数 AnnotationsRegexp 是否已赋值
                     * @return AnnotationsRegexp 是否已赋值
                     * 
                     */
                    bool AnnotationsRegexpHasBeenSet() const;

                    /**
                     * 获取Associated class loader regular expression, which is not matched if empty.
                     * @return LoaderClassNameRegexp Associated class loader regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetLoaderClassNameRegexp() const;

                    /**
                     * 设置Associated class loader regular expression, which is not matched if empty.
                     * @param _loaderClassNameRegexp Associated class loader regular expression, which is not matched if empty.
                     * 
                     */
                    void SetLoaderClassNameRegexp(const std::string& _loaderClassNameRegexp);

                    /**
                     * 判断参数 LoaderClassNameRegexp 是否已赋值
                     * @return LoaderClassNameRegexp 是否已赋值
                     * 
                     */
                    bool LoaderClassNameRegexpHasBeenSet() const;

                    /**
                     * 获取Operator
                     * @return Operator Operator
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator
                     * @param _operator Operator
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Whether it is a global rule. (Whether it is effective for all hosts under appid. 0: single UUID; 1: global. The default value is no.)
                     * @return IsGlobal Whether it is a global rule. (Whether it is effective for all hosts under appid. 0: single UUID; 1: global. The default value is no.)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置Whether it is a global rule. (Whether it is effective for all hosts under appid. 0: single UUID; 1: global. The default value is no.)
                     * @param _isGlobal Whether it is a global rule. (Whether it is effective for all hosts under appid. 0: single UUID; 1: global. The default value is no.)
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Status (0: valid, 1: deleted, 2: invalid (enabling switch off)).
                     * @return Status Status (0: valid, 1: deleted, 2: invalid (enabling switch off)).
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status (0: valid, 1: deleted, 2: invalid (enabling switch off)).
                     * @param _status Status (0: valid, 1: deleted, 2: invalid (enabling switch off)).
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

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
                     * 获取Whether to process historical events. 0: no, 1: yes.
                     * @return HandleHistory Whether to process historical events. 0: no, 1: yes.
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置Whether to process historical events. 0: no, 1: yes.
                     * @param _handleHistory Whether to process historical events. 0: no, 1: yes.
                     * 
                     */
                    void SetHandleHistory(const uint64_t& _handleHistory);

                    /**
                     * 判断参数 HandleHistory 是否已赋值
                     * @return HandleHistory 是否已赋值
                     * 
                     */
                    bool HandleHistoryHasBeenSet() const;

                    /**
                     * 获取Batch ID.
                     * @return GroupID Batch ID.
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置Batch ID.
                     * @param _groupID Batch ID.
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * @return MachinesNums Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * 
                     */
                    std::string GetMachinesNums() const;

                    /**
                     * 设置Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * @param _machinesNums Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     * 
                     */
                    void SetMachinesNums(const std::string& _machinesNums);

                    /**
                     * 判断参数 MachinesNums 是否已赋值
                     * @return MachinesNums 是否已赋值
                     * 
                     */
                    bool MachinesNumsHasBeenSet() const;

                    /**
                     * 获取Policy name
                     * @return GroupName Policy name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Policy name
                     * @param _groupName Policy name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Source code regular expression, which is not matched if empty.
                     * @return CodeSourceRegexp Source code regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetCodeSourceRegexp() const;

                    /**
                     * 设置Source code regular expression, which is not matched if empty.
                     * @param _codeSourceRegexp Source code regular expression, which is not matched if empty.
                     * 
                     */
                    void SetCodeSourceRegexp(const std::string& _codeSourceRegexp);

                    /**
                     * 判断参数 CodeSourceRegexp 是否已赋值
                     * @return CodeSourceRegexp 是否已赋值
                     * 
                     */
                    bool CodeSourceRegexpHasBeenSet() const;

                    /**
                     * 获取Call stack regular expression, which is not matched if empty.
                     * @return CallStackRegexp Call stack regular expression, which is not matched if empty.
                     * 
                     */
                    std::string GetCallStackRegexp() const;

                    /**
                     * 设置Call stack regular expression, which is not matched if empty.
                     * @param _callStackRegexp Call stack regular expression, which is not matched if empty.
                     * 
                     */
                    void SetCallStackRegexp(const std::string& _callStackRegexp);

                    /**
                     * 判断参数 CallStackRegexp 是否已赋值
                     * @return CallStackRegexp 是否已赋值
                     * 
                     */
                    bool CallStackRegexpHasBeenSet() const;

                    /**
                     * 获取Whether a file exists. 0: Default value when a user does not select a rule. 1: File exists. 2: File does not exist.
                     * @return FileExist Whether a file exists. 0: Default value when a user does not select a rule. 1: File exists. 2: File does not exist.
                     * 
                     */
                    uint64_t GetFileExist() const;

                    /**
                     * 设置Whether a file exists. 0: Default value when a user does not select a rule. 1: File exists. 2: File does not exist.
                     * @param _fileExist Whether a file exists. 0: Default value when a user does not select a rule. 1: File exists. 2: File does not exist.
                     * 
                     */
                    void SetFileExist(const uint64_t& _fileExist);

                    /**
                     * 判断参数 FileExist 是否已赋值
                     * @return FileExist 是否已赋值
                     * 
                     */
                    bool FileExistHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Client ID
                     */
                    std::vector<UuidHostip> m_uuidHostips;
                    bool m_uuidHostipsHasBeenSet;

                    /**
                     * Logical operator. 0: 5 valid regular expression logical ANDs; 1: logical OR.
                     */
                    uint64_t m_logicalSymbol;
                    bool m_logicalSymbolHasBeenSet;

                    /**
                     * Class name regular expression, which is not matched if empty.
                     */
                    std::string m_classNameRegexp;
                    bool m_classNameRegexpHasBeenSet;

                    /**
                     * Parent class name regular expression, which is not matched if empty.
                     */
                    std::string m_superClassNameRegexp;
                    bool m_superClassNameRegexpHasBeenSet;

                    /**
                     * Inherited interface regular expression, which is not matched if empty.
                     */
                    std::string m_interfacesRegexp;
                    bool m_interfacesRegexpHasBeenSet;

                    /**
                     * Annotation regular expression, which is not matched if empty.
                     */
                    std::string m_annotationsRegexp;
                    bool m_annotationsRegexpHasBeenSet;

                    /**
                     * Associated class loader regular expression, which is not matched if empty.
                     */
                    std::string m_loaderClassNameRegexp;
                    bool m_loaderClassNameRegexpHasBeenSet;

                    /**
                     * Operator
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Whether it is a global rule. (Whether it is effective for all hosts under appid. 0: single UUID; 1: global. The default value is no.)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Status (0: valid, 1: deleted, 2: invalid (enabling switch off)).
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Whether to process historical events. 0: no, 1: yes.
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * Batch ID.
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * Number of servers covered by a rule. When IsGlobal is set to 1, all servers are displayed.
                     */
                    std::string m_machinesNums;
                    bool m_machinesNumsHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Source code regular expression, which is not matched if empty.
                     */
                    std::string m_codeSourceRegexp;
                    bool m_codeSourceRegexpHasBeenSet;

                    /**
                     * Call stack regular expression, which is not matched if empty.
                     */
                    std::string m_callStackRegexp;
                    bool m_callStackRegexpHasBeenSet;

                    /**
                     * Whether a file exists. 0: Default value when a user does not select a rule. 1: File exists. 2: File does not exist.
                     */
                    uint64_t m_fileExist;
                    bool m_fileExistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MEMSHELLRULE_H_
