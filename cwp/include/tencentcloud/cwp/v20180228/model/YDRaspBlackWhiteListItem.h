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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_YDRASPBLACKWHITELISTITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_YDRASPBLACKWHITELISTITEM_H_

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
                * Application protection allowlist rule
                */
                class YDRaspBlackWhiteListItem : public AbstractModel
                {
                public:
                    YDRaspBlackWhiteListItem();
                    ~YDRaspBlackWhiteListItem() = default;
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
                     * 获取Allowlist type, rasp: vulnerability defense, memshell_scan: Java Webshell scan, memshell_inject: memory shell injection
                     * @return Source Allowlist type, rasp: vulnerability defense, memshell_scan: Java Webshell scan, memshell_inject: memory shell injection
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Allowlist type, rasp: vulnerability defense, memshell_scan: Java Webshell scan, memshell_inject: memory shell injection
                     * @param _source Allowlist type, rasp: vulnerability defense, memshell_scan: Java Webshell scan, memshell_inject: memory shell injection
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

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
                     * 获取Java Webshell scan usage, process historical events, 0: do not process 1: process
                     * @return HandleHistory Java Webshell scan usage, process historical events, 0: do not process 1: process
                     * 
                     */
                    uint64_t GetHandleHistory() const;

                    /**
                     * 设置Java Webshell scan usage, process historical events, 0: do not process 1: process
                     * @param _handleHistory Java Webshell scan usage, process historical events, 0: do not process 1: process
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
                     * 获取rasp and memory shell injection usage, match content, POC, can be a regular expression (MatchMode=5) or a string.
                     * @return Content rasp and memory shell injection usage, match content, POC, can be a regular expression (MatchMode=5) or a string.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置rasp and memory shell injection usage, match content, POC, can be a regular expression (MatchMode=5) or a string.
                     * @param _content rasp and memory shell injection usage, match content, POC, can be a regular expression (MatchMode=5) or a string.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取rasp and memory shell injection usage, attack source ip, leave unset for all sources, multiple allowed, can have ip ranges, such as: 192.168.57.1/24;172.17.0.1
                     * @return IP rasp and memory shell injection usage, attack source ip, leave unset for all sources, multiple allowed, can have ip ranges, such as: 192.168.57.1/24;172.17.0.1
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置rasp and memory shell injection usage, attack source ip, leave unset for all sources, multiple allowed, can have ip ranges, such as: 192.168.57.1/24;172.17.0.1
                     * @param _iP rasp and memory shell injection usage, attack source ip, leave unset for all sources, multiple allowed, can have ip ranges, such as: 192.168.57.1/24;172.17.0.1
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Rule name
                     * @return PolicyName Rule name
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Rule name
                     * @param _policyName Rule name
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取rasp and memory shell injection usage, allowlisting method, 0: malicious feature allowlisting, 1: request URL allowlisting
                     * @return FilterType rasp and memory shell injection usage, allowlisting method, 0: malicious feature allowlisting, 1: request URL allowlisting
                     * 
                     */
                    int64_t GetFilterType() const;

                    /**
                     * 设置rasp and memory shell injection usage, allowlisting method, 0: malicious feature allowlisting, 1: request URL allowlisting
                     * @param _filterType rasp and memory shell injection usage, allowlisting method, 0: malicious feature allowlisting, 1: request URL allowlisting
                     * 
                     */
                    void SetFilterType(const int64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取RASP and memory shell injection usage, attack type, vul.rasp_attacktype_mapping attack_type_id field
                     * @return AttackType RASP and memory shell injection usage, attack type, vul.rasp_attacktype_mapping attack_type_id field
                     * 
                     */
                    int64_t GetAttackType() const;

                    /**
                     * 设置RASP and memory shell injection usage, attack type, vul.rasp_attacktype_mapping attack_type_id field
                     * @param _attackType RASP and memory shell injection usage, attack type, vul.rasp_attacktype_mapping attack_type_id field
                     * 
                     */
                    void SetAttackType(const int64_t& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取rasp and memory shell injection usage, match mode, 0: exact match, 1: prefix match, 2: suffix matching, 4: arbitrary matching, 5: partial matching, 6: regular expression matching.
                     * @return MatchMode rasp and memory shell injection usage, match mode, 0: exact match, 1: prefix match, 2: suffix matching, 4: arbitrary matching, 5: partial matching, 6: regular expression matching.
                     * 
                     */
                    int64_t GetMatchMode() const;

                    /**
                     * 设置rasp and memory shell injection usage, match mode, 0: exact match, 1: prefix match, 2: suffix matching, 4: arbitrary matching, 5: partial matching, 6: regular expression matching.
                     * @param _matchMode rasp and memory shell injection usage, match mode, 0: exact match, 1: prefix match, 2: suffix matching, 4: arbitrary matching, 5: partial matching, 6: regular expression matching.
                     * 
                     */
                    void SetMatchMode(const int64_t& _matchMode);

                    /**
                     * 判断参数 MatchMode 是否已赋值
                     * @return MatchMode 是否已赋值
                     * 
                     */
                    bool MatchModeHasBeenSet() const;

                    /**
                     * 获取Effective asset type. 0: Host disabled. 1: Host enabled.
                     * @return CWPEffective Effective asset type. 0: Host disabled. 1: Host enabled.
                     * 
                     */
                    int64_t GetCWPEffective() const;

                    /**
                     * 设置Effective asset type. 0: Host disabled. 1: Host enabled.
                     * @param _cWPEffective Effective asset type. 0: Host disabled. 1: Host enabled.
                     * 
                     */
                    void SetCWPEffective(const int64_t& _cWPEffective);

                    /**
                     * 判断参数 CWPEffective 是否已赋值
                     * @return CWPEffective 是否已赋值
                     * 
                     */
                    bool CWPEffectiveHasBeenSet() const;

                    /**
                     * 获取0: a set of quuid 1: ALL the Real Server with host authorization
                     * @return CWPScope 0: a set of quuid 1: ALL the Real Server with host authorization
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置0: a set of quuid 1: ALL the Real Server with host authorization
                     * @param _cWPScope 0: a set of quuid 1: ALL the Real Server with host authorization
                     * 
                     */
                    void SetCWPScope(const int64_t& _cWPScope);

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取Designate the effective host machine
                     * @return CWPQuuids Designate the effective host machine
                     * 
                     */
                    std::vector<std::string> GetCWPQuuids() const;

                    /**
                     * 设置Designate the effective host machine
                     * @param _cWPQuuids Designate the effective host machine
                     * 
                     */
                    void SetCWPQuuids(const std::vector<std::string>& _cWPQuuids);

                    /**
                     * 判断参数 CWPQuuids 是否已赋值
                     * @return CWPQuuids 是否已赋值
                     * 
                     */
                    bool CWPQuuidsHasBeenSet() const;

                    /**
                     * 获取Effective asset type. 0: Container disabled. 1: Container enabled.
                     * @return TCSSEffective Effective asset type. 0: Container disabled. 1: Container enabled.
                     * 
                     */
                    int64_t GetTCSSEffective() const;

                    /**
                     * 设置Effective asset type. 0: Container disabled. 1: Container enabled.
                     * @param _tCSSEffective Effective asset type. 0: Container disabled. 1: Container enabled.
                     * 
                     */
                    void SetTCSSEffective(const int64_t& _tCSSEffective);

                    /**
                     * 判断参数 TCSSEffective 是否已赋值
                     * @return TCSSEffective 是否已赋值
                     * 
                     */
                    bool TCSSEffectiveHasBeenSet() const;

                    /**
                     * 获取0: a set of quuid 1: ALL the node with container authorization
                     * @return TCSSScope 0: a set of quuid 1: ALL the node with container authorization
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 设置0: a set of quuid 1: ALL the node with container authorization
                     * @param _tCSSScope 0: a set of quuid 1: ALL the node with container authorization
                     * 
                     */
                    void SetTCSSScope(const int64_t& _tCSSScope);

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取Designate the container node to take effect
                     * @return TCSSQuuids Designate the container node to take effect
                     * 
                     */
                    std::vector<std::string> GetTCSSQuuids() const;

                    /**
                     * 设置Designate the container node to take effect
                     * @param _tCSSQuuids Designate the container node to take effect
                     * 
                     */
                    void SetTCSSQuuids(const std::vector<std::string>& _tCSSQuuids);

                    /**
                     * 判断参数 TCSSQuuids 是否已赋值
                     * @return TCSSQuuids 是否已赋值
                     * 
                     */
                    bool TCSSQuuidsHasBeenSet() const;

                    /**
                     * 获取Effective asset type. 0: Super node disabled. 1: Super node enabled.
                     * @return EksEffective Effective asset type. 0: Super node disabled. 1: Super node enabled.
                     * 
                     */
                    int64_t GetEksEffective() const;

                    /**
                     * 设置Effective asset type. 0: Super node disabled. 1: Super node enabled.
                     * @param _eksEffective Effective asset type. 0: Super node disabled. 1: Super node enabled.
                     * 
                     */
                    void SetEksEffective(const int64_t& _eksEffective);

                    /**
                     * 判断参数 EksEffective 是否已赋值
                     * @return EksEffective 是否已赋值
                     * 
                     */
                    bool EksEffectiveHasBeenSet() const;

                    /**
                     * 获取0: a set of quuid 1: ALL the super node with container authorization
                     * @return EksScope 0: a set of quuid 1: ALL the super node with container authorization
                     * 
                     */
                    int64_t GetEksScope() const;

                    /**
                     * 设置0: a set of quuid 1: ALL the super node with container authorization
                     * @param _eksScope 0: a set of quuid 1: ALL the super node with container authorization
                     * 
                     */
                    void SetEksScope(const int64_t& _eksScope);

                    /**
                     * 判断参数 EksScope 是否已赋值
                     * @return EksScope 是否已赋值
                     * 
                     */
                    bool EksScopeHasBeenSet() const;

                    /**
                     * 获取Designate the super node where the container takes effect
                     * @return EksNodeUniqueID Designate the super node where the container takes effect
                     * 
                     */
                    std::vector<std::string> GetEksNodeUniqueID() const;

                    /**
                     * 设置Designate the super node where the container takes effect
                     * @param _eksNodeUniqueID Designate the super node where the container takes effect
                     * 
                     */
                    void SetEksNodeUniqueID(const std::vector<std::string>& _eksNodeUniqueID);

                    /**
                     * 判断参数 EksNodeUniqueID 是否已赋值
                     * @return EksNodeUniqueID 是否已赋值
                     * 
                     */
                    bool EksNodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取Application asset. If global, all hosts. Otherwise, the number of selected host servers.
                     * @return CWPMachinesNums Application asset. If global, all hosts. Otherwise, the number of selected host servers.
                     * 
                     */
                    std::string GetCWPMachinesNums() const;

                    /**
                     * 设置Application asset. If global, all hosts. Otherwise, the number of selected host servers.
                     * @param _cWPMachinesNums Application asset. If global, all hosts. Otherwise, the number of selected host servers.
                     * 
                     */
                    void SetCWPMachinesNums(const std::string& _cWPMachinesNums);

                    /**
                     * 判断参数 CWPMachinesNums 是否已赋值
                     * @return CWPMachinesNums 是否已赋值
                     * 
                     */
                    bool CWPMachinesNumsHasBeenSet() const;

                    /**
                     * 获取Application asset. If global, all containers host nodes. Otherwise, select the number of host nodes.
                     * @return TCSSMachinesNums Application asset. If global, all containers host nodes. Otherwise, select the number of host nodes.
                     * 
                     */
                    std::string GetTCSSMachinesNums() const;

                    /**
                     * 设置Application asset. If global, all containers host nodes. Otherwise, select the number of host nodes.
                     * @param _tCSSMachinesNums Application asset. If global, all containers host nodes. Otherwise, select the number of host nodes.
                     * 
                     */
                    void SetTCSSMachinesNums(const std::string& _tCSSMachinesNums);

                    /**
                     * 判断参数 TCSSMachinesNums 是否已赋值
                     * @return TCSSMachinesNums 是否已赋值
                     * 
                     */
                    bool TCSSMachinesNumsHasBeenSet() const;

                    /**
                     * 获取Application asset. If global, all super nodes. Otherwise, select the number of nodes.
                     * @return EksMachinesNums Application asset. If global, all super nodes. Otherwise, select the number of nodes.
                     * 
                     */
                    std::string GetEksMachinesNums() const;

                    /**
                     * 设置Application asset. If global, all super nodes. Otherwise, select the number of nodes.
                     * @param _eksMachinesNums Application asset. If global, all super nodes. Otherwise, select the number of nodes.
                     * 
                     */
                    void SetEksMachinesNums(const std::string& _eksMachinesNums);

                    /**
                     * 判断参数 EksMachinesNums 是否已赋值
                     * @return EksMachinesNums 是否已赋值
                     * 
                     */
                    bool EksMachinesNumsHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

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
                     * Allowlist type, rasp: vulnerability defense, memshell_scan: Java Webshell scan, memshell_inject: memory shell injection
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

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
                     * Java Webshell scan usage, process historical events, 0: do not process 1: process
                     */
                    uint64_t m_handleHistory;
                    bool m_handleHistoryHasBeenSet;

                    /**
                     * rasp and memory shell injection usage, match content, POC, can be a regular expression (MatchMode=5) or a string.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * rasp and memory shell injection usage, attack source ip, leave unset for all sources, multiple allowed, can have ip ranges, such as: 192.168.57.1/24;172.17.0.1
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Rule name
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * rasp and memory shell injection usage, allowlisting method, 0: malicious feature allowlisting, 1: request URL allowlisting
                     */
                    int64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * RASP and memory shell injection usage, attack type, vul.rasp_attacktype_mapping attack_type_id field
                     */
                    int64_t m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * rasp and memory shell injection usage, match mode, 0: exact match, 1: prefix match, 2: suffix matching, 4: arbitrary matching, 5: partial matching, 6: regular expression matching.
                     */
                    int64_t m_matchMode;
                    bool m_matchModeHasBeenSet;

                    /**
                     * Effective asset type. 0: Host disabled. 1: Host enabled.
                     */
                    int64_t m_cWPEffective;
                    bool m_cWPEffectiveHasBeenSet;

                    /**
                     * 0: a set of quuid 1: ALL the Real Server with host authorization
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * Designate the effective host machine
                     */
                    std::vector<std::string> m_cWPQuuids;
                    bool m_cWPQuuidsHasBeenSet;

                    /**
                     * Effective asset type. 0: Container disabled. 1: Container enabled.
                     */
                    int64_t m_tCSSEffective;
                    bool m_tCSSEffectiveHasBeenSet;

                    /**
                     * 0: a set of quuid 1: ALL the node with container authorization
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * Designate the container node to take effect
                     */
                    std::vector<std::string> m_tCSSQuuids;
                    bool m_tCSSQuuidsHasBeenSet;

                    /**
                     * Effective asset type. 0: Super node disabled. 1: Super node enabled.
                     */
                    int64_t m_eksEffective;
                    bool m_eksEffectiveHasBeenSet;

                    /**
                     * 0: a set of quuid 1: ALL the super node with container authorization
                     */
                    int64_t m_eksScope;
                    bool m_eksScopeHasBeenSet;

                    /**
                     * Designate the super node where the container takes effect
                     */
                    std::vector<std::string> m_eksNodeUniqueID;
                    bool m_eksNodeUniqueIDHasBeenSet;

                    /**
                     * Application asset. If global, all hosts. Otherwise, the number of selected host servers.
                     */
                    std::string m_cWPMachinesNums;
                    bool m_cWPMachinesNumsHasBeenSet;

                    /**
                     * Application asset. If global, all containers host nodes. Otherwise, select the number of host nodes.
                     */
                    std::string m_tCSSMachinesNums;
                    bool m_tCSSMachinesNumsHasBeenSet;

                    /**
                     * Application asset. If global, all super nodes. Otherwise, select the number of nodes.
                     */
                    std::string m_eksMachinesNums;
                    bool m_eksMachinesNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_YDRASPBLACKWHITELISTITEM_H_
