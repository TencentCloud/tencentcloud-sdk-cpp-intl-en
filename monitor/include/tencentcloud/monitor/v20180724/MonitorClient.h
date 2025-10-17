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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/monitor/v20180724/model/BindPrometheusManagedGrafanaRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindPrometheusManagedGrafanaResponse.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/BindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/CheckIsPrometheusNewUserRequest.h>
#include <tencentcloud/monitor/v20180724/model/CheckIsPrometheusNewUserResponse.h>
#include <tencentcloud/monitor/v20180724/model/CleanGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/CleanGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlertRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateAlertRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateExporterIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateExporterIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaNotificationChannelRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateGrafanaNotificationChannelResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAgentRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAgentResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusClusterAgentRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusClusterAgentResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusGlobalNotificationRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusGlobalNotificationResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusMultiTenantInstancePostPayModeRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusMultiTenantInstancePostPayModeResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusScrapeJobRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusScrapeJobResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreatePrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateRecordingRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateRecordingRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/CreateServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlertRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteAlertRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteExporterIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteExporterIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaNotificationChannelRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteGrafanaNotificationChannelResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertGroupsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertGroupsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusClusterAgentRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusClusterAgentResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusScrapeJobsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusScrapeJobsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempSyncRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeletePrometheusTempSyncResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteRecordingRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteRecordingRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DeleteSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/DeleteSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmEventsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticeCallbacksResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmNoticesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlertRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAlertRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeAllNamespacesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBaseMetricsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeBindingPolicyObjectListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeClusterAgentCreatingProgressRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeClusterAgentCreatingProgressResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeConditionsTemplateListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeDNSConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeDNSConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExporterIntegrationsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeExporterIntegrationsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaChannelsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaChannelsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaEnvironmentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaEnvironmentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaIntegrationsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaIntegrationsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaNotificationChannelsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaNotificationChannelsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaWhiteListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeGrafanaWhiteListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeInstalledPluginsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeInstalledPluginsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeMonitorTypesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyGroupListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAgentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertGroupsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertGroupsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusClusterAgentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusClusterAgentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalNotificationRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusGlobalNotificationResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceDetailRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceDetailResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceInitStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceInitStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceUsageRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceUsageResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesOverviewRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstancesOverviewResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRecordRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusRecordRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusScrapeJobsRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusScrapeJobsResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTargetsTMPRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTargetsTMPResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempSyncRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusTempSyncResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusZonesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribePrometheusZonesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeRecordingRulesRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeRecordingRulesResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeServiceDiscoveryResponse.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/DescribeStatisticDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/DestroyPrometheusInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/DestroyPrometheusInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaInternetRequest.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaInternetResponse.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaSSORequest.h>
#include <tencentcloud/monitor/v20180724/model/EnableGrafanaSSOResponse.h>
#include <tencentcloud/monitor/v20180724/model/EnableSSOCamCheckRequest.h>
#include <tencentcloud/monitor/v20180724/model/EnableSSOCamCheckResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetMonitorDataResponse.h>
#include <tencentcloud/monitor/v20180724/model/GetPrometheusAgentManagementCommandRequest.h>
#include <tencentcloud/monitor/v20180724/model/GetPrometheusAgentManagementCommandResponse.h>
#include <tencentcloud/monitor/v20180724/model/InstallPluginsRequest.h>
#include <tencentcloud/monitor/v20180724/model/InstallPluginsResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyInfoResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyNoticeResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyTasksResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyAlarmReceiversResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPolicyGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAgentExternalLabelsRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAgentExternalLabelsResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAlertPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusAlertPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusGlobalNotificationRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusGlobalNotificationResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusInstanceAttributesRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusInstanceAttributesResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusRecordRuleYamlRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusRecordRuleYamlResponse.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/ResumeGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/ResumeGrafanaInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/RunPrometheusInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/RunPrometheusInstanceResponse.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgRequest.h>
#include <tencentcloud/monitor/v20180724/model/SendCustomAlarmMsgResponse.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyRequest.h>
#include <tencentcloud/monitor/v20180724/model/SetDefaultAlarmPolicyResponse.h>
#include <tencentcloud/monitor/v20180724/model/SyncPrometheusTempRequest.h>
#include <tencentcloud/monitor/v20180724/model/SyncPrometheusTempResponse.h>
#include <tencentcloud/monitor/v20180724/model/TerminatePrometheusInstancesRequest.h>
#include <tencentcloud/monitor/v20180724/model/TerminatePrometheusInstancesResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingAllPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnBindingPolicyObjectResponse.h>
#include <tencentcloud/monitor/v20180724/model/UnbindPrometheusManagedGrafanaRequest.h>
#include <tencentcloud/monitor/v20180724/model/UnbindPrometheusManagedGrafanaResponse.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaDashboardRequest.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaDashboardResponse.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaPluginsRequest.h>
#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaPluginsResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleStateRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateAlertRuleStateResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateDNSConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateDNSConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateExporterIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateExporterIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaConfigRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaConfigResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaEnvironmentsRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaEnvironmentsResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaIntegrationRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaIntegrationResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaNotificationChannelRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaNotificationChannelResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaWhiteListRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateGrafanaWhiteListResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAgentStatusRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAgentStatusResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupStateRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupStateResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusScrapeJobRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusScrapeJobResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateRecordingRuleRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateRecordingRuleResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpdateSSOAccountRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpdateSSOAccountResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaDashboardRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaDashboardResponse.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaInstanceRequest.h>
#include <tencentcloud/monitor/v20180724/model/UpgradeGrafanaInstanceResponse.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            class MonitorClient : public AbstractClient
            {
            public:
                MonitorClient(const Credential &credential, const std::string &region);
                MonitorClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindPrometheusManagedGrafanaResponse> BindPrometheusManagedGrafanaOutcome;
                typedef std::future<BindPrometheusManagedGrafanaOutcome> BindPrometheusManagedGrafanaOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindPrometheusManagedGrafanaRequest&, BindPrometheusManagedGrafanaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindPrometheusManagedGrafanaAsyncHandler;
                typedef Outcome<Core::Error, Model::BindingPolicyObjectResponse> BindingPolicyObjectOutcome;
                typedef std::future<BindingPolicyObjectOutcome> BindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::BindingPolicyObjectRequest&, BindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindingPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckIsPrometheusNewUserResponse> CheckIsPrometheusNewUserOutcome;
                typedef std::future<CheckIsPrometheusNewUserOutcome> CheckIsPrometheusNewUserOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CheckIsPrometheusNewUserRequest&, CheckIsPrometheusNewUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckIsPrometheusNewUserAsyncHandler;
                typedef Outcome<Core::Error, Model::CleanGrafanaInstanceResponse> CleanGrafanaInstanceOutcome;
                typedef std::future<CleanGrafanaInstanceOutcome> CleanGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CleanGrafanaInstanceRequest&, CleanGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CleanGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmNoticeResponse> CreateAlarmNoticeOutcome;
                typedef std::future<CreateAlarmNoticeOutcome> CreateAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmNoticeRequest&, CreateAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlarmPolicyResponse> CreateAlarmPolicyOutcome;
                typedef std::future<CreateAlarmPolicyOutcome> CreateAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlarmPolicyRequest&, CreateAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAlertRuleResponse> CreateAlertRuleOutcome;
                typedef std::future<CreateAlertRuleOutcome> CreateAlertRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateAlertRuleRequest&, CreateAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExporterIntegrationResponse> CreateExporterIntegrationOutcome;
                typedef std::future<CreateExporterIntegrationOutcome> CreateExporterIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateExporterIntegrationRequest&, CreateExporterIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExporterIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGrafanaInstanceResponse> CreateGrafanaInstanceOutcome;
                typedef std::future<CreateGrafanaInstanceOutcome> CreateGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateGrafanaInstanceRequest&, CreateGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGrafanaIntegrationResponse> CreateGrafanaIntegrationOutcome;
                typedef std::future<CreateGrafanaIntegrationOutcome> CreateGrafanaIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateGrafanaIntegrationRequest&, CreateGrafanaIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGrafanaNotificationChannelResponse> CreateGrafanaNotificationChannelOutcome;
                typedef std::future<CreateGrafanaNotificationChannelOutcome> CreateGrafanaNotificationChannelOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateGrafanaNotificationChannelRequest&, CreateGrafanaNotificationChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaNotificationChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePolicyGroupResponse> CreatePolicyGroupOutcome;
                typedef std::future<CreatePolicyGroupOutcome> CreatePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePolicyGroupRequest&, CreatePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAgentResponse> CreatePrometheusAgentOutcome;
                typedef std::future<CreatePrometheusAgentOutcome> CreatePrometheusAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusAgentRequest&, CreatePrometheusAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertGroupResponse> CreatePrometheusAlertGroupOutcome;
                typedef std::future<CreatePrometheusAlertGroupOutcome> CreatePrometheusAlertGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusAlertGroupRequest&, CreatePrometheusAlertGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertPolicyResponse> CreatePrometheusAlertPolicyOutcome;
                typedef std::future<CreatePrometheusAlertPolicyOutcome> CreatePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusAlertPolicyRequest&, CreatePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusClusterAgentResponse> CreatePrometheusClusterAgentOutcome;
                typedef std::future<CreatePrometheusClusterAgentOutcome> CreatePrometheusClusterAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusClusterAgentRequest&, CreatePrometheusClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusConfigResponse> CreatePrometheusConfigOutcome;
                typedef std::future<CreatePrometheusConfigOutcome> CreatePrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusConfigRequest&, CreatePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusGlobalNotificationResponse> CreatePrometheusGlobalNotificationOutcome;
                typedef std::future<CreatePrometheusGlobalNotificationOutcome> CreatePrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusGlobalNotificationRequest&, CreatePrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusMultiTenantInstancePostPayModeResponse> CreatePrometheusMultiTenantInstancePostPayModeOutcome;
                typedef std::future<CreatePrometheusMultiTenantInstancePostPayModeOutcome> CreatePrometheusMultiTenantInstancePostPayModeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest&, CreatePrometheusMultiTenantInstancePostPayModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusMultiTenantInstancePostPayModeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusRecordRuleYamlResponse> CreatePrometheusRecordRuleYamlOutcome;
                typedef std::future<CreatePrometheusRecordRuleYamlOutcome> CreatePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusRecordRuleYamlRequest&, CreatePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusScrapeJobResponse> CreatePrometheusScrapeJobOutcome;
                typedef std::future<CreatePrometheusScrapeJobOutcome> CreatePrometheusScrapeJobOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusScrapeJobRequest&, CreatePrometheusScrapeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusScrapeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusTempResponse> CreatePrometheusTempOutcome;
                typedef std::future<CreatePrometheusTempOutcome> CreatePrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreatePrometheusTempRequest&, CreatePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecordingRuleResponse> CreateRecordingRuleOutcome;
                typedef std::future<CreateRecordingRuleOutcome> CreateRecordingRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateRecordingRuleRequest&, CreateRecordingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecordingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSSOAccountResponse> CreateSSOAccountOutcome;
                typedef std::future<CreateSSOAccountOutcome> CreateSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateSSOAccountRequest&, CreateSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceDiscoveryResponse> CreateServiceDiscoveryOutcome;
                typedef std::future<CreateServiceDiscoveryOutcome> CreateServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::CreateServiceDiscoveryRequest&, CreateServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceDiscoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmNoticesResponse> DeleteAlarmNoticesOutcome;
                typedef std::future<DeleteAlarmNoticesOutcome> DeleteAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmNoticesRequest&, DeleteAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlarmPolicyResponse> DeleteAlarmPolicyOutcome;
                typedef std::future<DeleteAlarmPolicyOutcome> DeleteAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlarmPolicyRequest&, DeleteAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAlertRulesResponse> DeleteAlertRulesOutcome;
                typedef std::future<DeleteAlertRulesOutcome> DeleteAlertRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteAlertRulesRequest&, DeleteAlertRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteExporterIntegrationResponse> DeleteExporterIntegrationOutcome;
                typedef std::future<DeleteExporterIntegrationOutcome> DeleteExporterIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteExporterIntegrationRequest&, DeleteExporterIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExporterIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGrafanaInstanceResponse> DeleteGrafanaInstanceOutcome;
                typedef std::future<DeleteGrafanaInstanceOutcome> DeleteGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteGrafanaInstanceRequest&, DeleteGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGrafanaIntegrationResponse> DeleteGrafanaIntegrationOutcome;
                typedef std::future<DeleteGrafanaIntegrationOutcome> DeleteGrafanaIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteGrafanaIntegrationRequest&, DeleteGrafanaIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGrafanaNotificationChannelResponse> DeleteGrafanaNotificationChannelOutcome;
                typedef std::future<DeleteGrafanaNotificationChannelOutcome> DeleteGrafanaNotificationChannelOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteGrafanaNotificationChannelRequest&, DeleteGrafanaNotificationChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaNotificationChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePolicyGroupResponse> DeletePolicyGroupOutcome;
                typedef std::future<DeletePolicyGroupOutcome> DeletePolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePolicyGroupRequest&, DeletePolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertGroupsResponse> DeletePrometheusAlertGroupsOutcome;
                typedef std::future<DeletePrometheusAlertGroupsOutcome> DeletePrometheusAlertGroupsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusAlertGroupsRequest&, DeletePrometheusAlertGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertPolicyResponse> DeletePrometheusAlertPolicyOutcome;
                typedef std::future<DeletePrometheusAlertPolicyOutcome> DeletePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusAlertPolicyRequest&, DeletePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusClusterAgentResponse> DeletePrometheusClusterAgentOutcome;
                typedef std::future<DeletePrometheusClusterAgentOutcome> DeletePrometheusClusterAgentOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusClusterAgentRequest&, DeletePrometheusClusterAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusClusterAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusConfigResponse> DeletePrometheusConfigOutcome;
                typedef std::future<DeletePrometheusConfigOutcome> DeletePrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusConfigRequest&, DeletePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusRecordRuleYamlResponse> DeletePrometheusRecordRuleYamlOutcome;
                typedef std::future<DeletePrometheusRecordRuleYamlOutcome> DeletePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusRecordRuleYamlRequest&, DeletePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusScrapeJobsResponse> DeletePrometheusScrapeJobsOutcome;
                typedef std::future<DeletePrometheusScrapeJobsOutcome> DeletePrometheusScrapeJobsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusScrapeJobsRequest&, DeletePrometheusScrapeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusScrapeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTempResponse> DeletePrometheusTempOutcome;
                typedef std::future<DeletePrometheusTempOutcome> DeletePrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusTempRequest&, DeletePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusTempSyncResponse> DeletePrometheusTempSyncOutcome;
                typedef std::future<DeletePrometheusTempSyncOutcome> DeletePrometheusTempSyncOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeletePrometheusTempSyncRequest&, DeletePrometheusTempSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusTempSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRecordingRulesResponse> DeleteRecordingRulesOutcome;
                typedef std::future<DeleteRecordingRulesOutcome> DeleteRecordingRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteRecordingRulesRequest&, DeleteRecordingRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordingRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSSOAccountResponse> DeleteSSOAccountOutcome;
                typedef std::future<DeleteSSOAccountOutcome> DeleteSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DeleteSSOAccountRequest&, DeleteSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccidentEventListResponse> DescribeAccidentEventListOutcome;
                typedef std::future<DescribeAccidentEventListOutcome> DescribeAccidentEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAccidentEventListRequest&, DescribeAccidentEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccidentEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmEventsResponse> DescribeAlarmEventsOutcome;
                typedef std::future<DescribeAlarmEventsOutcome> DescribeAlarmEventsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmEventsRequest&, DescribeAlarmEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmHistoriesResponse> DescribeAlarmHistoriesOutcome;
                typedef std::future<DescribeAlarmHistoriesOutcome> DescribeAlarmHistoriesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmHistoriesRequest&, DescribeAlarmHistoriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmHistoriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmMetricsResponse> DescribeAlarmMetricsOutcome;
                typedef std::future<DescribeAlarmMetricsOutcome> DescribeAlarmMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmMetricsRequest&, DescribeAlarmMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticeResponse> DescribeAlarmNoticeOutcome;
                typedef std::future<DescribeAlarmNoticeOutcome> DescribeAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeRequest&, DescribeAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticeCallbacksResponse> DescribeAlarmNoticeCallbacksOutcome;
                typedef std::future<DescribeAlarmNoticeCallbacksOutcome> DescribeAlarmNoticeCallbacksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticeCallbacksRequest&, DescribeAlarmNoticeCallbacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticeCallbacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmNoticesResponse> DescribeAlarmNoticesOutcome;
                typedef std::future<DescribeAlarmNoticesOutcome> DescribeAlarmNoticesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmNoticesRequest&, DescribeAlarmNoticesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmNoticesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmPoliciesResponse> DescribeAlarmPoliciesOutcome;
                typedef std::future<DescribeAlarmPoliciesOutcome> DescribeAlarmPoliciesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPoliciesRequest&, DescribeAlarmPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlarmPolicyResponse> DescribeAlarmPolicyOutcome;
                typedef std::future<DescribeAlarmPolicyOutcome> DescribeAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlarmPolicyRequest&, DescribeAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAlertRulesResponse> DescribeAlertRulesOutcome;
                typedef std::future<DescribeAlertRulesOutcome> DescribeAlertRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAlertRulesRequest&, DescribeAlertRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlertRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAllNamespacesResponse> DescribeAllNamespacesOutcome;
                typedef std::future<DescribeAllNamespacesOutcome> DescribeAllNamespacesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeAllNamespacesRequest&, DescribeAllNamespacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAllNamespacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseMetricsResponse> DescribeBaseMetricsOutcome;
                typedef std::future<DescribeBaseMetricsOutcome> DescribeBaseMetricsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBaseMetricsRequest&, DescribeBaseMetricsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseMetricsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicAlarmListResponse> DescribeBasicAlarmListOutcome;
                typedef std::future<DescribeBasicAlarmListOutcome> DescribeBasicAlarmListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBasicAlarmListRequest&, DescribeBasicAlarmListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicAlarmListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindingPolicyObjectListResponse> DescribeBindingPolicyObjectListOutcome;
                typedef std::future<DescribeBindingPolicyObjectListOutcome> DescribeBindingPolicyObjectListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeBindingPolicyObjectListRequest&, DescribeBindingPolicyObjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindingPolicyObjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAgentCreatingProgressResponse> DescribeClusterAgentCreatingProgressOutcome;
                typedef std::future<DescribeClusterAgentCreatingProgressOutcome> DescribeClusterAgentCreatingProgressOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeClusterAgentCreatingProgressRequest&, DescribeClusterAgentCreatingProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAgentCreatingProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConditionsTemplateListResponse> DescribeConditionsTemplateListOutcome;
                typedef std::future<DescribeConditionsTemplateListOutcome> DescribeConditionsTemplateListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeConditionsTemplateListRequest&, DescribeConditionsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConditionsTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDNSConfigResponse> DescribeDNSConfigOutcome;
                typedef std::future<DescribeDNSConfigOutcome> DescribeDNSConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeDNSConfigRequest&, DescribeDNSConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDNSConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExporterIntegrationsResponse> DescribeExporterIntegrationsOutcome;
                typedef std::future<DescribeExporterIntegrationsOutcome> DescribeExporterIntegrationsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeExporterIntegrationsRequest&, DescribeExporterIntegrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExporterIntegrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaChannelsResponse> DescribeGrafanaChannelsOutcome;
                typedef std::future<DescribeGrafanaChannelsOutcome> DescribeGrafanaChannelsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaChannelsRequest&, DescribeGrafanaChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaConfigResponse> DescribeGrafanaConfigOutcome;
                typedef std::future<DescribeGrafanaConfigOutcome> DescribeGrafanaConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaConfigRequest&, DescribeGrafanaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaEnvironmentsResponse> DescribeGrafanaEnvironmentsOutcome;
                typedef std::future<DescribeGrafanaEnvironmentsOutcome> DescribeGrafanaEnvironmentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaEnvironmentsRequest&, DescribeGrafanaEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaInstancesResponse> DescribeGrafanaInstancesOutcome;
                typedef std::future<DescribeGrafanaInstancesOutcome> DescribeGrafanaInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaInstancesRequest&, DescribeGrafanaInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaIntegrationsResponse> DescribeGrafanaIntegrationsOutcome;
                typedef std::future<DescribeGrafanaIntegrationsOutcome> DescribeGrafanaIntegrationsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaIntegrationsRequest&, DescribeGrafanaIntegrationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaIntegrationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaNotificationChannelsResponse> DescribeGrafanaNotificationChannelsOutcome;
                typedef std::future<DescribeGrafanaNotificationChannelsOutcome> DescribeGrafanaNotificationChannelsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaNotificationChannelsRequest&, DescribeGrafanaNotificationChannelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaNotificationChannelsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGrafanaWhiteListResponse> DescribeGrafanaWhiteListOutcome;
                typedef std::future<DescribeGrafanaWhiteListOutcome> DescribeGrafanaWhiteListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeGrafanaWhiteListRequest&, DescribeGrafanaWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrafanaWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstalledPluginsResponse> DescribeInstalledPluginsOutcome;
                typedef std::future<DescribeInstalledPluginsOutcome> DescribeInstalledPluginsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeInstalledPluginsRequest&, DescribeInstalledPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstalledPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonitorTypesResponse> DescribeMonitorTypesOutcome;
                typedef std::future<DescribeMonitorTypesOutcome> DescribeMonitorTypesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeMonitorTypesRequest&, DescribeMonitorTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonitorTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyConditionListResponse> DescribePolicyConditionListOutcome;
                typedef std::future<DescribePolicyConditionListOutcome> DescribePolicyConditionListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyConditionListRequest&, DescribePolicyConditionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyConditionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyGroupInfoResponse> DescribePolicyGroupInfoOutcome;
                typedef std::future<DescribePolicyGroupInfoOutcome> DescribePolicyGroupInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupInfoRequest&, DescribePolicyGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyGroupListResponse> DescribePolicyGroupListOutcome;
                typedef std::future<DescribePolicyGroupListOutcome> DescribePolicyGroupListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePolicyGroupListRequest&, DescribePolicyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductEventListResponse> DescribeProductEventListOutcome;
                typedef std::future<DescribeProductEventListOutcome> DescribeProductEventListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeProductEventListRequest&, DescribeProductEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAgentInstancesResponse> DescribePrometheusAgentInstancesOutcome;
                typedef std::future<DescribePrometheusAgentInstancesOutcome> DescribePrometheusAgentInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAgentInstancesRequest&, DescribePrometheusAgentInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAgentsResponse> DescribePrometheusAgentsOutcome;
                typedef std::future<DescribePrometheusAgentsOutcome> DescribePrometheusAgentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAgentsRequest&, DescribePrometheusAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertGroupsResponse> DescribePrometheusAlertGroupsOutcome;
                typedef std::future<DescribePrometheusAlertGroupsOutcome> DescribePrometheusAlertGroupsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAlertGroupsRequest&, DescribePrometheusAlertGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusAlertPolicyResponse> DescribePrometheusAlertPolicyOutcome;
                typedef std::future<DescribePrometheusAlertPolicyOutcome> DescribePrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusAlertPolicyRequest&, DescribePrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusClusterAgentsResponse> DescribePrometheusClusterAgentsOutcome;
                typedef std::future<DescribePrometheusClusterAgentsOutcome> DescribePrometheusClusterAgentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusClusterAgentsRequest&, DescribePrometheusClusterAgentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusClusterAgentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusConfigResponse> DescribePrometheusConfigOutcome;
                typedef std::future<DescribePrometheusConfigOutcome> DescribePrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusConfigRequest&, DescribePrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusGlobalConfigResponse> DescribePrometheusGlobalConfigOutcome;
                typedef std::future<DescribePrometheusGlobalConfigOutcome> DescribePrometheusGlobalConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusGlobalConfigRequest&, DescribePrometheusGlobalConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusGlobalConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusGlobalNotificationResponse> DescribePrometheusGlobalNotificationOutcome;
                typedef std::future<DescribePrometheusGlobalNotificationOutcome> DescribePrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusGlobalNotificationRequest&, DescribePrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceDetailResponse> DescribePrometheusInstanceDetailOutcome;
                typedef std::future<DescribePrometheusInstanceDetailOutcome> DescribePrometheusInstanceDetailOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstanceDetailRequest&, DescribePrometheusInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceInitStatusResponse> DescribePrometheusInstanceInitStatusOutcome;
                typedef std::future<DescribePrometheusInstanceInitStatusOutcome> DescribePrometheusInstanceInitStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstanceInitStatusRequest&, DescribePrometheusInstanceInitStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceInitStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceUsageResponse> DescribePrometheusInstanceUsageOutcome;
                typedef std::future<DescribePrometheusInstanceUsageOutcome> DescribePrometheusInstanceUsageOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstanceUsageRequest&, DescribePrometheusInstanceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstancesResponse> DescribePrometheusInstancesOutcome;
                typedef std::future<DescribePrometheusInstancesOutcome> DescribePrometheusInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstancesRequest&, DescribePrometheusInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstancesOverviewResponse> DescribePrometheusInstancesOverviewOutcome;
                typedef std::future<DescribePrometheusInstancesOverviewOutcome> DescribePrometheusInstancesOverviewOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusInstancesOverviewRequest&, DescribePrometheusInstancesOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstancesOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusRecordRuleYamlResponse> DescribePrometheusRecordRuleYamlOutcome;
                typedef std::future<DescribePrometheusRecordRuleYamlOutcome> DescribePrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusRecordRuleYamlRequest&, DescribePrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusRecordRulesResponse> DescribePrometheusRecordRulesOutcome;
                typedef std::future<DescribePrometheusRecordRulesOutcome> DescribePrometheusRecordRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusRecordRulesRequest&, DescribePrometheusRecordRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusRecordRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusScrapeJobsResponse> DescribePrometheusScrapeJobsOutcome;
                typedef std::future<DescribePrometheusScrapeJobsOutcome> DescribePrometheusScrapeJobsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusScrapeJobsRequest&, DescribePrometheusScrapeJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusScrapeJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTargetsTMPResponse> DescribePrometheusTargetsTMPOutcome;
                typedef std::future<DescribePrometheusTargetsTMPOutcome> DescribePrometheusTargetsTMPOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusTargetsTMPRequest&, DescribePrometheusTargetsTMPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTargetsTMPAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTempResponse> DescribePrometheusTempOutcome;
                typedef std::future<DescribePrometheusTempOutcome> DescribePrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusTempRequest&, DescribePrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusTempSyncResponse> DescribePrometheusTempSyncOutcome;
                typedef std::future<DescribePrometheusTempSyncOutcome> DescribePrometheusTempSyncOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusTempSyncRequest&, DescribePrometheusTempSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusTempSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusZonesResponse> DescribePrometheusZonesOutcome;
                typedef std::future<DescribePrometheusZonesOutcome> DescribePrometheusZonesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribePrometheusZonesRequest&, DescribePrometheusZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRecordingRulesResponse> DescribeRecordingRulesOutcome;
                typedef std::future<DescribeRecordingRulesOutcome> DescribeRecordingRulesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeRecordingRulesRequest&, DescribeRecordingRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordingRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSSOAccountResponse> DescribeSSOAccountOutcome;
                typedef std::future<DescribeSSOAccountOutcome> DescribeSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeSSOAccountRequest&, DescribeSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceDiscoveryResponse> DescribeServiceDiscoveryOutcome;
                typedef std::future<DescribeServiceDiscoveryOutcome> DescribeServiceDiscoveryOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeServiceDiscoveryRequest&, DescribeServiceDiscoveryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceDiscoveryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStatisticDataResponse> DescribeStatisticDataOutcome;
                typedef std::future<DescribeStatisticDataOutcome> DescribeStatisticDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DescribeStatisticDataRequest&, DescribeStatisticDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatisticDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPrometheusInstanceResponse> DestroyPrometheusInstanceOutcome;
                typedef std::future<DestroyPrometheusInstanceOutcome> DestroyPrometheusInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::DestroyPrometheusInstanceRequest&, DestroyPrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGrafanaInternetResponse> EnableGrafanaInternetOutcome;
                typedef std::future<EnableGrafanaInternetOutcome> EnableGrafanaInternetOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::EnableGrafanaInternetRequest&, EnableGrafanaInternetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGrafanaInternetAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGrafanaSSOResponse> EnableGrafanaSSOOutcome;
                typedef std::future<EnableGrafanaSSOOutcome> EnableGrafanaSSOOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::EnableGrafanaSSORequest&, EnableGrafanaSSOOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGrafanaSSOAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableSSOCamCheckResponse> EnableSSOCamCheckOutcome;
                typedef std::future<EnableSSOCamCheckOutcome> EnableSSOCamCheckOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::EnableSSOCamCheckRequest&, EnableSSOCamCheckOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableSSOCamCheckAsyncHandler;
                typedef Outcome<Core::Error, Model::GetMonitorDataResponse> GetMonitorDataOutcome;
                typedef std::future<GetMonitorDataOutcome> GetMonitorDataOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetMonitorDataRequest&, GetMonitorDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorDataAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPrometheusAgentManagementCommandResponse> GetPrometheusAgentManagementCommandOutcome;
                typedef std::future<GetPrometheusAgentManagementCommandOutcome> GetPrometheusAgentManagementCommandOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::GetPrometheusAgentManagementCommandRequest&, GetPrometheusAgentManagementCommandOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusAgentManagementCommandAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallPluginsResponse> InstallPluginsOutcome;
                typedef std::future<InstallPluginsOutcome> InstallPluginsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::InstallPluginsRequest&, InstallPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmNoticeResponse> ModifyAlarmNoticeOutcome;
                typedef std::future<ModifyAlarmNoticeOutcome> ModifyAlarmNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmNoticeRequest&, ModifyAlarmNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyConditionResponse> ModifyAlarmPolicyConditionOutcome;
                typedef std::future<ModifyAlarmPolicyConditionOutcome> ModifyAlarmPolicyConditionOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyConditionRequest&, ModifyAlarmPolicyConditionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyConditionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyInfoResponse> ModifyAlarmPolicyInfoOutcome;
                typedef std::future<ModifyAlarmPolicyInfoOutcome> ModifyAlarmPolicyInfoOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyInfoRequest&, ModifyAlarmPolicyInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyNoticeResponse> ModifyAlarmPolicyNoticeOutcome;
                typedef std::future<ModifyAlarmPolicyNoticeOutcome> ModifyAlarmPolicyNoticeOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyNoticeRequest&, ModifyAlarmPolicyNoticeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyNoticeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyStatusResponse> ModifyAlarmPolicyStatusOutcome;
                typedef std::future<ModifyAlarmPolicyStatusOutcome> ModifyAlarmPolicyStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyStatusRequest&, ModifyAlarmPolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmPolicyTasksResponse> ModifyAlarmPolicyTasksOutcome;
                typedef std::future<ModifyAlarmPolicyTasksOutcome> ModifyAlarmPolicyTasksOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmPolicyTasksRequest&, ModifyAlarmPolicyTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmPolicyTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAlarmReceiversResponse> ModifyAlarmReceiversOutcome;
                typedef std::future<ModifyAlarmReceiversOutcome> ModifyAlarmReceiversOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyAlarmReceiversRequest&, ModifyAlarmReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAlarmReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGrafanaInstanceResponse> ModifyGrafanaInstanceOutcome;
                typedef std::future<ModifyGrafanaInstanceOutcome> ModifyGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyGrafanaInstanceRequest&, ModifyGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPolicyGroupResponse> ModifyPolicyGroupOutcome;
                typedef std::future<ModifyPolicyGroupOutcome> ModifyPolicyGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPolicyGroupRequest&, ModifyPolicyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPolicyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAgentExternalLabelsResponse> ModifyPrometheusAgentExternalLabelsOutcome;
                typedef std::future<ModifyPrometheusAgentExternalLabelsOutcome> ModifyPrometheusAgentExternalLabelsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusAgentExternalLabelsRequest&, ModifyPrometheusAgentExternalLabelsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAgentExternalLabelsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertPolicyResponse> ModifyPrometheusAlertPolicyOutcome;
                typedef std::future<ModifyPrometheusAlertPolicyOutcome> ModifyPrometheusAlertPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusAlertPolicyRequest&, ModifyPrometheusAlertPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusConfigResponse> ModifyPrometheusConfigOutcome;
                typedef std::future<ModifyPrometheusConfigOutcome> ModifyPrometheusConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusConfigRequest&, ModifyPrometheusConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusGlobalNotificationResponse> ModifyPrometheusGlobalNotificationOutcome;
                typedef std::future<ModifyPrometheusGlobalNotificationOutcome> ModifyPrometheusGlobalNotificationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusGlobalNotificationRequest&, ModifyPrometheusGlobalNotificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusGlobalNotificationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusInstanceAttributesResponse> ModifyPrometheusInstanceAttributesOutcome;
                typedef std::future<ModifyPrometheusInstanceAttributesOutcome> ModifyPrometheusInstanceAttributesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusInstanceAttributesRequest&, ModifyPrometheusInstanceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusInstanceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusRecordRuleYamlResponse> ModifyPrometheusRecordRuleYamlOutcome;
                typedef std::future<ModifyPrometheusRecordRuleYamlOutcome> ModifyPrometheusRecordRuleYamlOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusRecordRuleYamlRequest&, ModifyPrometheusRecordRuleYamlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusRecordRuleYamlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusTempResponse> ModifyPrometheusTempOutcome;
                typedef std::future<ModifyPrometheusTempOutcome> ModifyPrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ModifyPrometheusTempRequest&, ModifyPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeGrafanaInstanceResponse> ResumeGrafanaInstanceOutcome;
                typedef std::future<ResumeGrafanaInstanceOutcome> ResumeGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::ResumeGrafanaInstanceRequest&, ResumeGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeGrafanaInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::RunPrometheusInstanceResponse> RunPrometheusInstanceOutcome;
                typedef std::future<RunPrometheusInstanceOutcome> RunPrometheusInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::RunPrometheusInstanceRequest&, RunPrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunPrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::SendCustomAlarmMsgResponse> SendCustomAlarmMsgOutcome;
                typedef std::future<SendCustomAlarmMsgOutcome> SendCustomAlarmMsgOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SendCustomAlarmMsgRequest&, SendCustomAlarmMsgOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendCustomAlarmMsgAsyncHandler;
                typedef Outcome<Core::Error, Model::SetDefaultAlarmPolicyResponse> SetDefaultAlarmPolicyOutcome;
                typedef std::future<SetDefaultAlarmPolicyOutcome> SetDefaultAlarmPolicyOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SetDefaultAlarmPolicyRequest&, SetDefaultAlarmPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetDefaultAlarmPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncPrometheusTempResponse> SyncPrometheusTempOutcome;
                typedef std::future<SyncPrometheusTempOutcome> SyncPrometheusTempOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::SyncPrometheusTempRequest&, SyncPrometheusTempOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncPrometheusTempAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminatePrometheusInstancesResponse> TerminatePrometheusInstancesOutcome;
                typedef std::future<TerminatePrometheusInstancesOutcome> TerminatePrometheusInstancesOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::TerminatePrometheusInstancesRequest&, TerminatePrometheusInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminatePrometheusInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindingAllPolicyObjectResponse> UnBindingAllPolicyObjectOutcome;
                typedef std::future<UnBindingAllPolicyObjectOutcome> UnBindingAllPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingAllPolicyObjectRequest&, UnBindingAllPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingAllPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindingPolicyObjectResponse> UnBindingPolicyObjectOutcome;
                typedef std::future<UnBindingPolicyObjectOutcome> UnBindingPolicyObjectOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnBindingPolicyObjectRequest&, UnBindingPolicyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindingPolicyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindPrometheusManagedGrafanaResponse> UnbindPrometheusManagedGrafanaOutcome;
                typedef std::future<UnbindPrometheusManagedGrafanaOutcome> UnbindPrometheusManagedGrafanaOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UnbindPrometheusManagedGrafanaRequest&, UnbindPrometheusManagedGrafanaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindPrometheusManagedGrafanaAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallGrafanaDashboardResponse> UninstallGrafanaDashboardOutcome;
                typedef std::future<UninstallGrafanaDashboardOutcome> UninstallGrafanaDashboardOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UninstallGrafanaDashboardRequest&, UninstallGrafanaDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallGrafanaDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallGrafanaPluginsResponse> UninstallGrafanaPluginsOutcome;
                typedef std::future<UninstallGrafanaPluginsOutcome> UninstallGrafanaPluginsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UninstallGrafanaPluginsRequest&, UninstallGrafanaPluginsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallGrafanaPluginsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertRuleResponse> UpdateAlertRuleOutcome;
                typedef std::future<UpdateAlertRuleOutcome> UpdateAlertRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateAlertRuleRequest&, UpdateAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAlertRuleStateResponse> UpdateAlertRuleStateOutcome;
                typedef std::future<UpdateAlertRuleStateOutcome> UpdateAlertRuleStateOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateAlertRuleStateRequest&, UpdateAlertRuleStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertRuleStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDNSConfigResponse> UpdateDNSConfigOutcome;
                typedef std::future<UpdateDNSConfigOutcome> UpdateDNSConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateDNSConfigRequest&, UpdateDNSConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDNSConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateExporterIntegrationResponse> UpdateExporterIntegrationOutcome;
                typedef std::future<UpdateExporterIntegrationOutcome> UpdateExporterIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateExporterIntegrationRequest&, UpdateExporterIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateExporterIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaConfigResponse> UpdateGrafanaConfigOutcome;
                typedef std::future<UpdateGrafanaConfigOutcome> UpdateGrafanaConfigOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaConfigRequest&, UpdateGrafanaConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaEnvironmentsResponse> UpdateGrafanaEnvironmentsOutcome;
                typedef std::future<UpdateGrafanaEnvironmentsOutcome> UpdateGrafanaEnvironmentsOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaEnvironmentsRequest&, UpdateGrafanaEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaIntegrationResponse> UpdateGrafanaIntegrationOutcome;
                typedef std::future<UpdateGrafanaIntegrationOutcome> UpdateGrafanaIntegrationOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaIntegrationRequest&, UpdateGrafanaIntegrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaIntegrationAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaNotificationChannelResponse> UpdateGrafanaNotificationChannelOutcome;
                typedef std::future<UpdateGrafanaNotificationChannelOutcome> UpdateGrafanaNotificationChannelOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaNotificationChannelRequest&, UpdateGrafanaNotificationChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaNotificationChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateGrafanaWhiteListResponse> UpdateGrafanaWhiteListOutcome;
                typedef std::future<UpdateGrafanaWhiteListOutcome> UpdateGrafanaWhiteListOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateGrafanaWhiteListRequest&, UpdateGrafanaWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusAgentStatusResponse> UpdatePrometheusAgentStatusOutcome;
                typedef std::future<UpdatePrometheusAgentStatusOutcome> UpdatePrometheusAgentStatusOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusAgentStatusRequest&, UpdatePrometheusAgentStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAgentStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusAlertGroupResponse> UpdatePrometheusAlertGroupOutcome;
                typedef std::future<UpdatePrometheusAlertGroupOutcome> UpdatePrometheusAlertGroupOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusAlertGroupRequest&, UpdatePrometheusAlertGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAlertGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusAlertGroupStateResponse> UpdatePrometheusAlertGroupStateOutcome;
                typedef std::future<UpdatePrometheusAlertGroupStateOutcome> UpdatePrometheusAlertGroupStateOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusAlertGroupStateRequest&, UpdatePrometheusAlertGroupStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAlertGroupStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdatePrometheusScrapeJobResponse> UpdatePrometheusScrapeJobOutcome;
                typedef std::future<UpdatePrometheusScrapeJobOutcome> UpdatePrometheusScrapeJobOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdatePrometheusScrapeJobRequest&, UpdatePrometheusScrapeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusScrapeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateRecordingRuleResponse> UpdateRecordingRuleOutcome;
                typedef std::future<UpdateRecordingRuleOutcome> UpdateRecordingRuleOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateRecordingRuleRequest&, UpdateRecordingRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRecordingRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateSSOAccountResponse> UpdateSSOAccountOutcome;
                typedef std::future<UpdateSSOAccountOutcome> UpdateSSOAccountOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpdateSSOAccountRequest&, UpdateSSOAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSSOAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeGrafanaDashboardResponse> UpgradeGrafanaDashboardOutcome;
                typedef std::future<UpgradeGrafanaDashboardOutcome> UpgradeGrafanaDashboardOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpgradeGrafanaDashboardRequest&, UpgradeGrafanaDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGrafanaDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeGrafanaInstanceResponse> UpgradeGrafanaInstanceOutcome;
                typedef std::future<UpgradeGrafanaInstanceOutcome> UpgradeGrafanaInstanceOutcomeCallable;
                typedef std::function<void(const MonitorClient*, const Model::UpgradeGrafanaInstanceRequest&, UpgradeGrafanaInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGrafanaInstanceAsyncHandler;



                /**
                 *This API is used to bind a Grafana instance.
                 * @param req BindPrometheusManagedGrafanaRequest
                 * @return BindPrometheusManagedGrafanaOutcome
                 */
                BindPrometheusManagedGrafanaOutcome BindPrometheusManagedGrafana(const Model::BindPrometheusManagedGrafanaRequest &request);
                void BindPrometheusManagedGrafanaAsync(const Model::BindPrometheusManagedGrafanaRequest& request, const BindPrometheusManagedGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindPrometheusManagedGrafanaOutcomeCallable BindPrometheusManagedGrafanaCallable(const Model::BindPrometheusManagedGrafanaRequest& request);

                /**
                 *This API is used to bind an alarm policy to a specific object.
                 * @param req BindingPolicyObjectRequest
                 * @return BindingPolicyObjectOutcome
                 */
                BindingPolicyObjectOutcome BindingPolicyObject(const Model::BindingPolicyObjectRequest &request);
                void BindingPolicyObjectAsync(const Model::BindingPolicyObjectRequest& request, const BindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindingPolicyObjectOutcomeCallable BindingPolicyObjectCallable(const Model::BindingPolicyObjectRequest& request);

                /**
                 *This API is used to determine whether the user is new to TMP, that is, whether the user has never created a TMP instance in any region.
                 * @param req CheckIsPrometheusNewUserRequest
                 * @return CheckIsPrometheusNewUserOutcome
                 */
                CheckIsPrometheusNewUserOutcome CheckIsPrometheusNewUser(const Model::CheckIsPrometheusNewUserRequest &request);
                void CheckIsPrometheusNewUserAsync(const Model::CheckIsPrometheusNewUserRequest& request, const CheckIsPrometheusNewUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckIsPrometheusNewUserOutcomeCallable CheckIsPrometheusNewUserCallable(const Model::CheckIsPrometheusNewUserRequest& request);

                /**
                 *This API is used to forcibly terminate a Grafana instance.
                 * @param req CleanGrafanaInstanceRequest
                 * @return CleanGrafanaInstanceOutcome
                 */
                CleanGrafanaInstanceOutcome CleanGrafanaInstance(const Model::CleanGrafanaInstanceRequest &request);
                void CleanGrafanaInstanceAsync(const Model::CleanGrafanaInstanceRequest& request, const CleanGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CleanGrafanaInstanceOutcomeCallable CleanGrafanaInstanceCallable(const Model::CleanGrafanaInstanceRequest& request);

                /**
                 *This API is used to create a notification template.
                 * @param req CreateAlarmNoticeRequest
                 * @return CreateAlarmNoticeOutcome
                 */
                CreateAlarmNoticeOutcome CreateAlarmNotice(const Model::CreateAlarmNoticeRequest &request);
                void CreateAlarmNoticeAsync(const Model::CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmNoticeOutcomeCallable CreateAlarmNoticeCallable(const Model::CreateAlarmNoticeRequest& request);

                /**
                 *This API is used to create an alarm policy.
                 * @param req CreateAlarmPolicyRequest
                 * @return CreateAlarmPolicyOutcome
                 */
                CreateAlarmPolicyOutcome CreateAlarmPolicy(const Model::CreateAlarmPolicyRequest &request);
                void CreateAlarmPolicyAsync(const Model::CreateAlarmPolicyRequest& request, const CreateAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlarmPolicyOutcomeCallable CreateAlarmPolicyCallable(const Model::CreateAlarmPolicyRequest& request);

                /**
                 *This API is used to create a Prometheus alerting rule.

Note that alert object and alert message are special fields of Prometheus Rule Annotations, which need to be passed in through `annotations` and correspond to `summary` and `description` keys respectively. For more information, see [Alerting rules](https://prometheus.io/docs/prometheus/latest/configuration/alerting_rules/).
                 * @param req CreateAlertRuleRequest
                 * @return CreateAlertRuleOutcome
                 */
                CreateAlertRuleOutcome CreateAlertRule(const Model::CreateAlertRuleRequest &request);
                void CreateAlertRuleAsync(const Model::CreateAlertRuleRequest& request, const CreateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAlertRuleOutcomeCallable CreateAlertRuleCallable(const Model::CreateAlertRuleRequest& request);

                /**
                 *This API is used to create an exporter integration.
                 * @param req CreateExporterIntegrationRequest
                 * @return CreateExporterIntegrationOutcome
                 */
                CreateExporterIntegrationOutcome CreateExporterIntegration(const Model::CreateExporterIntegrationRequest &request);
                void CreateExporterIntegrationAsync(const Model::CreateExporterIntegrationRequest& request, const CreateExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExporterIntegrationOutcomeCallable CreateExporterIntegrationCallable(const Model::CreateExporterIntegrationRequest& request);

                /**
                 *This API is used to create a monthly subscribed TCMG instance of the Basic Edition, with auto-renewal enabled and vouchers not allowed by default.
                 * @param req CreateGrafanaInstanceRequest
                 * @return CreateGrafanaInstanceOutcome
                 */
                CreateGrafanaInstanceOutcome CreateGrafanaInstance(const Model::CreateGrafanaInstanceRequest &request);
                void CreateGrafanaInstanceAsync(const Model::CreateGrafanaInstanceRequest& request, const CreateGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGrafanaInstanceOutcomeCallable CreateGrafanaInstanceCallable(const Model::CreateGrafanaInstanceRequest& request);

                /**
                 *This API is used to create a Grafana integration configuration.
                 * @param req CreateGrafanaIntegrationRequest
                 * @return CreateGrafanaIntegrationOutcome
                 */
                CreateGrafanaIntegrationOutcome CreateGrafanaIntegration(const Model::CreateGrafanaIntegrationRequest &request);
                void CreateGrafanaIntegrationAsync(const Model::CreateGrafanaIntegrationRequest& request, const CreateGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGrafanaIntegrationOutcomeCallable CreateGrafanaIntegrationCallable(const Model::CreateGrafanaIntegrationRequest& request);

                /**
                 *This API is used to create a Grafana notification channel.
                 * @param req CreateGrafanaNotificationChannelRequest
                 * @return CreateGrafanaNotificationChannelOutcome
                 */
                CreateGrafanaNotificationChannelOutcome CreateGrafanaNotificationChannel(const Model::CreateGrafanaNotificationChannelRequest &request);
                void CreateGrafanaNotificationChannelAsync(const Model::CreateGrafanaNotificationChannelRequest& request, const CreateGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGrafanaNotificationChannelOutcomeCallable CreateGrafanaNotificationChannelCallable(const Model::CreateGrafanaNotificationChannelRequest& request);

                /**
                 *This API is used to add a policy group.
                 * @param req CreatePolicyGroupRequest
                 * @return CreatePolicyGroupOutcome
                 */
                CreatePolicyGroupOutcome CreatePolicyGroup(const Model::CreatePolicyGroupRequest &request);
                void CreatePolicyGroupAsync(const Model::CreatePolicyGroupRequest& request, const CreatePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePolicyGroupOutcomeCallable CreatePolicyGroupCallable(const Model::CreatePolicyGroupRequest& request);

                /**
                 *This API is used to create a Prometheus CVM agent.
                 * @param req CreatePrometheusAgentRequest
                 * @return CreatePrometheusAgentOutcome
                 */
                CreatePrometheusAgentOutcome CreatePrometheusAgent(const Model::CreatePrometheusAgentRequest &request);
                void CreatePrometheusAgentAsync(const Model::CreatePrometheusAgentRequest& request, const CreatePrometheusAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAgentOutcomeCallable CreatePrometheusAgentCallable(const Model::CreatePrometheusAgentRequest& request);

                /**
                 *This API is used to create a Prometheus alert rule groups.

This API is used to group alert rules, which can include multiple alert rules. Alert messages within the group are sent via the alert group's notification template.
This API is used to enable individually creating enabled/disabled alert rules under an alert group.
                 * @param req CreatePrometheusAlertGroupRequest
                 * @return CreatePrometheusAlertGroupOutcome
                 */
                CreatePrometheusAlertGroupOutcome CreatePrometheusAlertGroup(const Model::CreatePrometheusAlertGroupRequest &request);
                void CreatePrometheusAlertGroupAsync(const Model::CreatePrometheusAlertGroupRequest& request, const CreatePrometheusAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertGroupOutcomeCallable CreatePrometheusAlertGroupCallable(const Model::CreatePrometheusAlertGroupRequest& request);

                /**
                 *This API is used to create an alerting rule.
                 * @param req CreatePrometheusAlertPolicyRequest
                 * @return CreatePrometheusAlertPolicyOutcome
                 */
                CreatePrometheusAlertPolicyOutcome CreatePrometheusAlertPolicy(const Model::CreatePrometheusAlertPolicyRequest &request);
                void CreatePrometheusAlertPolicyAsync(const Model::CreatePrometheusAlertPolicyRequest& request, const CreatePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertPolicyOutcomeCallable CreatePrometheusAlertPolicyCallable(const Model::CreatePrometheusAlertPolicyRequest& request);

                /**
                 *This API is used to associate a cluster with a Cloud Monitor (CM)-integrated Tencent Managed Service for Prometheus (TMP) 2.0 instance.
                 * @param req CreatePrometheusClusterAgentRequest
                 * @return CreatePrometheusClusterAgentOutcome
                 */
                CreatePrometheusClusterAgentOutcome CreatePrometheusClusterAgent(const Model::CreatePrometheusClusterAgentRequest &request);
                void CreatePrometheusClusterAgentAsync(const Model::CreatePrometheusClusterAgentRequest& request, const CreatePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusClusterAgentOutcomeCallable CreatePrometheusClusterAgentCallable(const Model::CreatePrometheusClusterAgentRequest& request);

                /**
                 *This API is used to create Prometheus configurations.
                 * @param req CreatePrometheusConfigRequest
                 * @return CreatePrometheusConfigOutcome
                 */
                CreatePrometheusConfigOutcome CreatePrometheusConfig(const Model::CreatePrometheusConfigRequest &request);
                void CreatePrometheusConfigAsync(const Model::CreatePrometheusConfigRequest& request, const CreatePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusConfigOutcomeCallable CreatePrometheusConfigCallable(const Model::CreatePrometheusConfigRequest& request);

                /**
                 *This API is used to create a global alert notification channel.
                 * @param req CreatePrometheusGlobalNotificationRequest
                 * @return CreatePrometheusGlobalNotificationOutcome
                 */
                CreatePrometheusGlobalNotificationOutcome CreatePrometheusGlobalNotification(const Model::CreatePrometheusGlobalNotificationRequest &request);
                void CreatePrometheusGlobalNotificationAsync(const Model::CreatePrometheusGlobalNotificationRequest& request, const CreatePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusGlobalNotificationOutcomeCallable CreatePrometheusGlobalNotificationCallable(const Model::CreatePrometheusGlobalNotificationRequest& request);

                /**
                 *This API is used to create a pay-as-you-go Prometheus instance.
                 * @param req CreatePrometheusMultiTenantInstancePostPayModeRequest
                 * @return CreatePrometheusMultiTenantInstancePostPayModeOutcome
                 */
                CreatePrometheusMultiTenantInstancePostPayModeOutcome CreatePrometheusMultiTenantInstancePostPayMode(const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest &request);
                void CreatePrometheusMultiTenantInstancePostPayModeAsync(const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest& request, const CreatePrometheusMultiTenantInstancePostPayModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusMultiTenantInstancePostPayModeOutcomeCallable CreatePrometheusMultiTenantInstancePostPayModeCallable(const Model::CreatePrometheusMultiTenantInstancePostPayModeRequest& request);

                /**
                 *This API is used to create a recording rule in the YAML way.
                 * @param req CreatePrometheusRecordRuleYamlRequest
                 * @return CreatePrometheusRecordRuleYamlOutcome
                 */
                CreatePrometheusRecordRuleYamlOutcome CreatePrometheusRecordRuleYaml(const Model::CreatePrometheusRecordRuleYamlRequest &request);
                void CreatePrometheusRecordRuleYamlAsync(const Model::CreatePrometheusRecordRuleYamlRequest& request, const CreatePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusRecordRuleYamlOutcomeCallable CreatePrometheusRecordRuleYamlCallable(const Model::CreatePrometheusRecordRuleYamlRequest& request);

                /**
                 *This API is used to create a Prometheus scrape task.
                 * @param req CreatePrometheusScrapeJobRequest
                 * @return CreatePrometheusScrapeJobOutcome
                 */
                CreatePrometheusScrapeJobOutcome CreatePrometheusScrapeJob(const Model::CreatePrometheusScrapeJobRequest &request);
                void CreatePrometheusScrapeJobAsync(const Model::CreatePrometheusScrapeJobRequest& request, const CreatePrometheusScrapeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusScrapeJobOutcomeCallable CreatePrometheusScrapeJobCallable(const Model::CreatePrometheusScrapeJobRequest& request);

                /**
                 *This API is used to create a TMP template.
                 * @param req CreatePrometheusTempRequest
                 * @return CreatePrometheusTempOutcome
                 */
                CreatePrometheusTempOutcome CreatePrometheusTemp(const Model::CreatePrometheusTempRequest &request);
                void CreatePrometheusTempAsync(const Model::CreatePrometheusTempRequest& request, const CreatePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusTempOutcomeCallable CreatePrometheusTempCallable(const Model::CreatePrometheusTempRequest& request);

                /**
                 *This API is used to create a Prometheus recording rule.
                 * @param req CreateRecordingRuleRequest
                 * @return CreateRecordingRuleOutcome
                 */
                CreateRecordingRuleOutcome CreateRecordingRule(const Model::CreateRecordingRuleRequest &request);
                void CreateRecordingRuleAsync(const Model::CreateRecordingRuleRequest& request, const CreateRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecordingRuleOutcomeCallable CreateRecordingRuleCallable(const Model::CreateRecordingRuleRequest& request);

                /**
                 *This API is used to authorize a Grafana instance to another Tencent Cloud user.
                 * @param req CreateSSOAccountRequest
                 * @return CreateSSOAccountOutcome
                 */
                CreateSSOAccountOutcome CreateSSOAccount(const Model::CreateSSOAccountRequest &request);
                void CreateSSOAccountAsync(const Model::CreateSSOAccountRequest& request, const CreateSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSSOAccountOutcomeCallable CreateSSOAccountCallable(const Model::CreateSSOAccountRequest& request);

                /**
                 *This API is used to create a Prometheus scrape configuration in TKE.
<p>Note: The prerequisite is that the corresponding TKE service has been integrated through the Prometheus console. For more information, see
<a href="https://intl.cloud.tencent.com/document/product/248/48859?from_cn_redirect=1" target="_blank">Agent Management</a>.</p>
                 * @param req CreateServiceDiscoveryRequest
                 * @return CreateServiceDiscoveryOutcome
                 */
                CreateServiceDiscoveryOutcome CreateServiceDiscovery(const Model::CreateServiceDiscoveryRequest &request);
                void CreateServiceDiscoveryAsync(const Model::CreateServiceDiscoveryRequest& request, const CreateServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceDiscoveryOutcomeCallable CreateServiceDiscoveryCallable(const Model::CreateServiceDiscoveryRequest& request);

                /**
                 *This API is used to delete an alarm notification template.
                 * @param req DeleteAlarmNoticesRequest
                 * @return DeleteAlarmNoticesOutcome
                 */
                DeleteAlarmNoticesOutcome DeleteAlarmNotices(const Model::DeleteAlarmNoticesRequest &request);
                void DeleteAlarmNoticesAsync(const Model::DeleteAlarmNoticesRequest& request, const DeleteAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmNoticesOutcomeCallable DeleteAlarmNoticesCallable(const Model::DeleteAlarmNoticesRequest& request);

                /**
                 *This API is used to delete an alarm policy.
                 * @param req DeleteAlarmPolicyRequest
                 * @return DeleteAlarmPolicyOutcome
                 */
                DeleteAlarmPolicyOutcome DeleteAlarmPolicy(const Model::DeleteAlarmPolicyRequest &request);
                void DeleteAlarmPolicyAsync(const Model::DeleteAlarmPolicyRequest& request, const DeleteAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlarmPolicyOutcomeCallable DeleteAlarmPolicyCallable(const Model::DeleteAlarmPolicyRequest& request);

                /**
                 *This API is used to batch delete Prometheus alerting rules.
                 * @param req DeleteAlertRulesRequest
                 * @return DeleteAlertRulesOutcome
                 */
                DeleteAlertRulesOutcome DeleteAlertRules(const Model::DeleteAlertRulesRequest &request);
                void DeleteAlertRulesAsync(const Model::DeleteAlertRulesRequest& request, const DeleteAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAlertRulesOutcomeCallable DeleteAlertRulesCallable(const Model::DeleteAlertRulesRequest& request);

                /**
                 *This API is used to delete an exporter integration.
                 * @param req DeleteExporterIntegrationRequest
                 * @return DeleteExporterIntegrationOutcome
                 */
                DeleteExporterIntegrationOutcome DeleteExporterIntegration(const Model::DeleteExporterIntegrationRequest &request);
                void DeleteExporterIntegrationAsync(const Model::DeleteExporterIntegrationRequest& request, const DeleteExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteExporterIntegrationOutcomeCallable DeleteExporterIntegrationCallable(const Model::DeleteExporterIntegrationRequest& request);

                /**
                 *This API is used to refund a monthly subscribed TCMG instance. Once it is called, the instance cannot be used and will be automatically terminated seven days later.
                 * @param req DeleteGrafanaInstanceRequest
                 * @return DeleteGrafanaInstanceOutcome
                 */
                DeleteGrafanaInstanceOutcome DeleteGrafanaInstance(const Model::DeleteGrafanaInstanceRequest &request);
                void DeleteGrafanaInstanceAsync(const Model::DeleteGrafanaInstanceRequest& request, const DeleteGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGrafanaInstanceOutcomeCallable DeleteGrafanaInstanceCallable(const Model::DeleteGrafanaInstanceRequest& request);

                /**
                 *This API is used to delete a Grafana integration configuration.
                 * @param req DeleteGrafanaIntegrationRequest
                 * @return DeleteGrafanaIntegrationOutcome
                 */
                DeleteGrafanaIntegrationOutcome DeleteGrafanaIntegration(const Model::DeleteGrafanaIntegrationRequest &request);
                void DeleteGrafanaIntegrationAsync(const Model::DeleteGrafanaIntegrationRequest& request, const DeleteGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGrafanaIntegrationOutcomeCallable DeleteGrafanaIntegrationCallable(const Model::DeleteGrafanaIntegrationRequest& request);

                /**
                 *This API is used to delete a Grafana notification channel.
                 * @param req DeleteGrafanaNotificationChannelRequest
                 * @return DeleteGrafanaNotificationChannelOutcome
                 */
                DeleteGrafanaNotificationChannelOutcome DeleteGrafanaNotificationChannel(const Model::DeleteGrafanaNotificationChannelRequest &request);
                void DeleteGrafanaNotificationChannelAsync(const Model::DeleteGrafanaNotificationChannelRequest& request, const DeleteGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGrafanaNotificationChannelOutcomeCallable DeleteGrafanaNotificationChannelCallable(const Model::DeleteGrafanaNotificationChannelRequest& request);

                /**
                 *This API is used to delete an alarm policy group.
                 * @param req DeletePolicyGroupRequest
                 * @return DeletePolicyGroupOutcome
                 */
                DeletePolicyGroupOutcome DeletePolicyGroup(const Model::DeletePolicyGroupRequest &request);
                void DeletePolicyGroupAsync(const Model::DeletePolicyGroupRequest& request, const DeletePolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePolicyGroupOutcomeCallable DeletePolicyGroupCallable(const Model::DeletePolicyGroupRequest& request);

                /**
                 *This API is used to delete Prometheus alert rule groups.
                 * @param req DeletePrometheusAlertGroupsRequest
                 * @return DeletePrometheusAlertGroupsOutcome
                 */
                DeletePrometheusAlertGroupsOutcome DeletePrometheusAlertGroups(const Model::DeletePrometheusAlertGroupsRequest &request);
                void DeletePrometheusAlertGroupsAsync(const Model::DeletePrometheusAlertGroupsRequest& request, const DeletePrometheusAlertGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertGroupsOutcomeCallable DeletePrometheusAlertGroupsCallable(const Model::DeletePrometheusAlertGroupsRequest& request);

                /**
                 *This API is used to delete a TMP 2.0 instance alerting rule.
                 * @param req DeletePrometheusAlertPolicyRequest
                 * @return DeletePrometheusAlertPolicyOutcome
                 */
                DeletePrometheusAlertPolicyOutcome DeletePrometheusAlertPolicy(const Model::DeletePrometheusAlertPolicyRequest &request);
                void DeletePrometheusAlertPolicyAsync(const Model::DeletePrometheusAlertPolicyRequest& request, const DeletePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertPolicyOutcomeCallable DeletePrometheusAlertPolicyCallable(const Model::DeletePrometheusAlertPolicyRequest& request);

                /**
                 *This API is used to disassociate a TMP instance from a cluster.
                 * @param req DeletePrometheusClusterAgentRequest
                 * @return DeletePrometheusClusterAgentOutcome
                 */
                DeletePrometheusClusterAgentOutcome DeletePrometheusClusterAgent(const Model::DeletePrometheusClusterAgentRequest &request);
                void DeletePrometheusClusterAgentAsync(const Model::DeletePrometheusClusterAgentRequest& request, const DeletePrometheusClusterAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusClusterAgentOutcomeCallable DeletePrometheusClusterAgentCallable(const Model::DeletePrometheusClusterAgentRequest& request);

                /**
                 *This API is used to delete Prometheus configurations. If the target cluster does not exist, a result indicating success will be returned.
                 * @param req DeletePrometheusConfigRequest
                 * @return DeletePrometheusConfigOutcome
                 */
                DeletePrometheusConfigOutcome DeletePrometheusConfig(const Model::DeletePrometheusConfigRequest &request);
                void DeletePrometheusConfigAsync(const Model::DeletePrometheusConfigRequest& request, const DeletePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusConfigOutcomeCallable DeletePrometheusConfigCallable(const Model::DeletePrometheusConfigRequest& request);

                /**
                 *This API is used to delete a recording instance.
                 * @param req DeletePrometheusRecordRuleYamlRequest
                 * @return DeletePrometheusRecordRuleYamlOutcome
                 */
                DeletePrometheusRecordRuleYamlOutcome DeletePrometheusRecordRuleYaml(const Model::DeletePrometheusRecordRuleYamlRequest &request);
                void DeletePrometheusRecordRuleYamlAsync(const Model::DeletePrometheusRecordRuleYamlRequest& request, const DeletePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusRecordRuleYamlOutcomeCallable DeletePrometheusRecordRuleYamlCallable(const Model::DeletePrometheusRecordRuleYamlRequest& request);

                /**
                 *This API is used to delete a Prometheus scrape task.
                 * @param req DeletePrometheusScrapeJobsRequest
                 * @return DeletePrometheusScrapeJobsOutcome
                 */
                DeletePrometheusScrapeJobsOutcome DeletePrometheusScrapeJobs(const Model::DeletePrometheusScrapeJobsRequest &request);
                void DeletePrometheusScrapeJobsAsync(const Model::DeletePrometheusScrapeJobsRequest& request, const DeletePrometheusScrapeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusScrapeJobsOutcomeCallable DeletePrometheusScrapeJobsCallable(const Model::DeletePrometheusScrapeJobsRequest& request);

                /**
                 *This API is used to delete a TMP template.
                 * @param req DeletePrometheusTempRequest
                 * @return DeletePrometheusTempOutcome
                 */
                DeletePrometheusTempOutcome DeletePrometheusTemp(const Model::DeletePrometheusTempRequest &request);
                void DeletePrometheusTempAsync(const Model::DeletePrometheusTempRequest& request, const DeletePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTempOutcomeCallable DeletePrometheusTempCallable(const Model::DeletePrometheusTempRequest& request);

                /**
                 *This API is used to unsync a template, which will delete the configuration generated by the template in the target. It takes effect for v2 instances.
                 * @param req DeletePrometheusTempSyncRequest
                 * @return DeletePrometheusTempSyncOutcome
                 */
                DeletePrometheusTempSyncOutcome DeletePrometheusTempSync(const Model::DeletePrometheusTempSyncRequest &request);
                void DeletePrometheusTempSyncAsync(const Model::DeletePrometheusTempSyncRequest& request, const DeletePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusTempSyncOutcomeCallable DeletePrometheusTempSyncCallable(const Model::DeletePrometheusTempSyncRequest& request);

                /**
                 *This API is used to batch delete Prometheus recording rules.
                 * @param req DeleteRecordingRulesRequest
                 * @return DeleteRecordingRulesOutcome
                 */
                DeleteRecordingRulesOutcome DeleteRecordingRules(const Model::DeleteRecordingRulesRequest &request);
                void DeleteRecordingRulesAsync(const Model::DeleteRecordingRulesRequest& request, const DeleteRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRecordingRulesOutcomeCallable DeleteRecordingRulesCallable(const Model::DeleteRecordingRulesRequest& request);

                /**
                 *This API is used to delete an authorized TCMG user.
                 * @param req DeleteSSOAccountRequest
                 * @return DeleteSSOAccountOutcome
                 */
                DeleteSSOAccountOutcome DeleteSSOAccount(const Model::DeleteSSOAccountRequest &request);
                void DeleteSSOAccountAsync(const Model::DeleteSSOAccountRequest& request, const DeleteSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSSOAccountOutcomeCallable DeleteSSOAccountCallable(const Model::DeleteSSOAccountRequest& request);

                /**
                 *This API is used to get the platform event list.
                 * @param req DescribeAccidentEventListRequest
                 * @return DescribeAccidentEventListOutcome
                 */
                DescribeAccidentEventListOutcome DescribeAccidentEventList(const Model::DescribeAccidentEventListRequest &request);
                void DescribeAccidentEventListAsync(const Model::DescribeAccidentEventListRequest& request, const DescribeAccidentEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccidentEventListOutcomeCallable DescribeAccidentEventListCallable(const Model::DescribeAccidentEventListRequest& request);

                /**
                 *This API is used to query the list of alarm events.
                 * @param req DescribeAlarmEventsRequest
                 * @return DescribeAlarmEventsOutcome
                 */
                DescribeAlarmEventsOutcome DescribeAlarmEvents(const Model::DescribeAlarmEventsRequest &request);
                void DescribeAlarmEventsAsync(const Model::DescribeAlarmEventsRequest& request, const DescribeAlarmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmEventsOutcomeCallable DescribeAlarmEventsCallable(const Model::DescribeAlarmEventsRequest& request);

                /**
                 *This API is used to query the alarm records.

Note: **If you use a sub-account, you can only query the alarm records of authorized projects** or uncategorized products.
                 * @param req DescribeAlarmHistoriesRequest
                 * @return DescribeAlarmHistoriesOutcome
                 */
                DescribeAlarmHistoriesOutcome DescribeAlarmHistories(const Model::DescribeAlarmHistoriesRequest &request);
                void DescribeAlarmHistoriesAsync(const Model::DescribeAlarmHistoriesRequest& request, const DescribeAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmHistoriesOutcomeCallable DescribeAlarmHistoriesCallable(const Model::DescribeAlarmHistoriesRequest& request);

                /**
                 *This API is used to query the list of alarm metrics.
                 * @param req DescribeAlarmMetricsRequest
                 * @return DescribeAlarmMetricsOutcome
                 */
                DescribeAlarmMetricsOutcome DescribeAlarmMetrics(const Model::DescribeAlarmMetricsRequest &request);
                void DescribeAlarmMetricsAsync(const Model::DescribeAlarmMetricsRequest& request, const DescribeAlarmMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmMetricsOutcomeCallable DescribeAlarmMetricsCallable(const Model::DescribeAlarmMetricsRequest& request);

                /**
                 *This API is used to query the details of a single notification template.
                 * @param req DescribeAlarmNoticeRequest
                 * @return DescribeAlarmNoticeOutcome
                 */
                DescribeAlarmNoticeOutcome DescribeAlarmNotice(const Model::DescribeAlarmNoticeRequest &request);
                void DescribeAlarmNoticeAsync(const Model::DescribeAlarmNoticeRequest& request, const DescribeAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeOutcomeCallable DescribeAlarmNoticeCallable(const Model::DescribeAlarmNoticeRequest& request);

                /**
                 *This API is used to obtain all the callback URLs of an alarm notification template.
                 * @param req DescribeAlarmNoticeCallbacksRequest
                 * @return DescribeAlarmNoticeCallbacksOutcome
                 */
                DescribeAlarmNoticeCallbacksOutcome DescribeAlarmNoticeCallbacks(const Model::DescribeAlarmNoticeCallbacksRequest &request);
                void DescribeAlarmNoticeCallbacksAsync(const Model::DescribeAlarmNoticeCallbacksRequest& request, const DescribeAlarmNoticeCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticeCallbacksOutcomeCallable DescribeAlarmNoticeCallbacksCallable(const Model::DescribeAlarmNoticeCallbacksRequest& request);

                /**
                 *This API is used to query the list of notification templates.
                 * @param req DescribeAlarmNoticesRequest
                 * @return DescribeAlarmNoticesOutcome
                 */
                DescribeAlarmNoticesOutcome DescribeAlarmNotices(const Model::DescribeAlarmNoticesRequest &request);
                void DescribeAlarmNoticesAsync(const Model::DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmNoticesOutcomeCallable DescribeAlarmNoticesCallable(const Model::DescribeAlarmNoticesRequest& request);

                /**
                 *This API is used to query the list of alarm policies.
                 * @param req DescribeAlarmPoliciesRequest
                 * @return DescribeAlarmPoliciesOutcome
                 */
                DescribeAlarmPoliciesOutcome DescribeAlarmPolicies(const Model::DescribeAlarmPoliciesRequest &request);
                void DescribeAlarmPoliciesAsync(const Model::DescribeAlarmPoliciesRequest& request, const DescribeAlarmPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPoliciesOutcomeCallable DescribeAlarmPoliciesCallable(const Model::DescribeAlarmPoliciesRequest& request);

                /**
                 *This API is used to get the details of a single alarm policy.
                 * @param req DescribeAlarmPolicyRequest
                 * @return DescribeAlarmPolicyOutcome
                 */
                DescribeAlarmPolicyOutcome DescribeAlarmPolicy(const Model::DescribeAlarmPolicyRequest &request);
                void DescribeAlarmPolicyAsync(const Model::DescribeAlarmPolicyRequest& request, const DescribeAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlarmPolicyOutcomeCallable DescribeAlarmPolicyCallable(const Model::DescribeAlarmPolicyRequest& request);

                /**
                 *This API is used to query a Prometheus alerting rule.
                 * @param req DescribeAlertRulesRequest
                 * @return DescribeAlertRulesOutcome
                 */
                DescribeAlertRulesOutcome DescribeAlertRules(const Model::DescribeAlertRulesRequest &request);
                void DescribeAlertRulesAsync(const Model::DescribeAlertRulesRequest& request, const DescribeAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAlertRulesOutcomeCallable DescribeAlertRulesCallable(const Model::DescribeAlertRulesRequest& request);

                /**
                 *This API is used to query all namespaces.
                 * @param req DescribeAllNamespacesRequest
                 * @return DescribeAllNamespacesOutcome
                 */
                DescribeAllNamespacesOutcome DescribeAllNamespaces(const Model::DescribeAllNamespacesRequest &request);
                void DescribeAllNamespacesAsync(const Model::DescribeAllNamespacesRequest& request, const DescribeAllNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAllNamespacesOutcomeCallable DescribeAllNamespacesCallable(const Model::DescribeAllNamespacesRequest& request);

                /**
                 *This API is used to get the attributes of basic metrics.
                 * @param req DescribeBaseMetricsRequest
                 * @return DescribeBaseMetricsOutcome
                 */
                DescribeBaseMetricsOutcome DescribeBaseMetrics(const Model::DescribeBaseMetricsRequest &request);
                void DescribeBaseMetricsAsync(const Model::DescribeBaseMetricsRequest& request, const DescribeBaseMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseMetricsOutcomeCallable DescribeBaseMetricsCallable(const Model::DescribeBaseMetricsRequest& request);

                /**
                 *This API is used to get the basic alarm list.
                 * @param req DescribeBasicAlarmListRequest
                 * @return DescribeBasicAlarmListOutcome
                 */
                DescribeBasicAlarmListOutcome DescribeBasicAlarmList(const Model::DescribeBasicAlarmListRequest &request);
                void DescribeBasicAlarmListAsync(const Model::DescribeBasicAlarmListRequest& request, const DescribeBasicAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicAlarmListOutcomeCallable DescribeBasicAlarmListCallable(const Model::DescribeBasicAlarmListRequest& request);

                /**
                 *This API is used to get the bound object list.
                 * @param req DescribeBindingPolicyObjectListRequest
                 * @return DescribeBindingPolicyObjectListOutcome
                 */
                DescribeBindingPolicyObjectListOutcome DescribeBindingPolicyObjectList(const Model::DescribeBindingPolicyObjectListRequest &request);
                void DescribeBindingPolicyObjectListAsync(const Model::DescribeBindingPolicyObjectListRequest& request, const DescribeBindingPolicyObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindingPolicyObjectListOutcomeCallable DescribeBindingPolicyObjectListCallable(const Model::DescribeBindingPolicyObjectListRequest& request);

                /**
                 *This API is used to obtain the binding status between the TencentCloud Managed Service for Prometheus instance and the TKE cluster.
                 * @param req DescribeClusterAgentCreatingProgressRequest
                 * @return DescribeClusterAgentCreatingProgressOutcome
                 */
                DescribeClusterAgentCreatingProgressOutcome DescribeClusterAgentCreatingProgress(const Model::DescribeClusterAgentCreatingProgressRequest &request);
                void DescribeClusterAgentCreatingProgressAsync(const Model::DescribeClusterAgentCreatingProgressRequest& request, const DescribeClusterAgentCreatingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAgentCreatingProgressOutcomeCallable DescribeClusterAgentCreatingProgressCallable(const Model::DescribeClusterAgentCreatingProgressRequest& request);

                /**
                 *This API is used to get the trigger condition template.
                 * @param req DescribeConditionsTemplateListRequest
                 * @return DescribeConditionsTemplateListOutcome
                 */
                DescribeConditionsTemplateListOutcome DescribeConditionsTemplateList(const Model::DescribeConditionsTemplateListRequest &request);
                void DescribeConditionsTemplateListAsync(const Model::DescribeConditionsTemplateListRequest& request, const DescribeConditionsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConditionsTemplateListOutcomeCallable DescribeConditionsTemplateListCallable(const Model::DescribeConditionsTemplateListRequest& request);

                /**
                 *This API is used to list Grafana DNS configurations.
                 * @param req DescribeDNSConfigRequest
                 * @return DescribeDNSConfigOutcome
                 */
                DescribeDNSConfigOutcome DescribeDNSConfig(const Model::DescribeDNSConfigRequest &request);
                void DescribeDNSConfigAsync(const Model::DescribeDNSConfigRequest& request, const DescribeDNSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDNSConfigOutcomeCallable DescribeDNSConfigCallable(const Model::DescribeDNSConfigRequest& request);

                /**
                 *This API is used to query the list of exporter integrations.
                 * @param req DescribeExporterIntegrationsRequest
                 * @return DescribeExporterIntegrationsOutcome
                 */
                DescribeExporterIntegrationsOutcome DescribeExporterIntegrations(const Model::DescribeExporterIntegrationsRequest &request);
                void DescribeExporterIntegrationsAsync(const Model::DescribeExporterIntegrationsRequest& request, const DescribeExporterIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExporterIntegrationsOutcomeCallable DescribeExporterIntegrationsCallable(const Model::DescribeExporterIntegrationsRequest& request);

                /**
                 *This API is used to list all Grafana alert channels.
                 * @param req DescribeGrafanaChannelsRequest
                 * @return DescribeGrafanaChannelsOutcome
                 */
                DescribeGrafanaChannelsOutcome DescribeGrafanaChannels(const Model::DescribeGrafanaChannelsRequest &request);
                void DescribeGrafanaChannelsAsync(const Model::DescribeGrafanaChannelsRequest& request, const DescribeGrafanaChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaChannelsOutcomeCallable DescribeGrafanaChannelsCallable(const Model::DescribeGrafanaChannelsRequest& request);

                /**
                 *This API is used to list Grafana settings, i.e., the `grafana.ini` file content.
                 * @param req DescribeGrafanaConfigRequest
                 * @return DescribeGrafanaConfigOutcome
                 */
                DescribeGrafanaConfigOutcome DescribeGrafanaConfig(const Model::DescribeGrafanaConfigRequest &request);
                void DescribeGrafanaConfigAsync(const Model::DescribeGrafanaConfigRequest& request, const DescribeGrafanaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaConfigOutcomeCallable DescribeGrafanaConfigCallable(const Model::DescribeGrafanaConfigRequest& request);

                /**
                 *This API is used to list Grafana environment variables.
                 * @param req DescribeGrafanaEnvironmentsRequest
                 * @return DescribeGrafanaEnvironmentsOutcome
                 */
                DescribeGrafanaEnvironmentsOutcome DescribeGrafanaEnvironments(const Model::DescribeGrafanaEnvironmentsRequest &request);
                void DescribeGrafanaEnvironmentsAsync(const Model::DescribeGrafanaEnvironmentsRequest& request, const DescribeGrafanaEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaEnvironmentsOutcomeCallable DescribeGrafanaEnvironmentsCallable(const Model::DescribeGrafanaEnvironmentsRequest& request);

                /**
                 *This API is used to list all Grafana instances under a user account.
                 * @param req DescribeGrafanaInstancesRequest
                 * @return DescribeGrafanaInstancesOutcome
                 */
                DescribeGrafanaInstancesOutcome DescribeGrafanaInstances(const Model::DescribeGrafanaInstancesRequest &request);
                void DescribeGrafanaInstancesAsync(const Model::DescribeGrafanaInstancesRequest& request, const DescribeGrafanaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaInstancesOutcomeCallable DescribeGrafanaInstancesCallable(const Model::DescribeGrafanaInstancesRequest& request);

                /**
                 *This API is used to list installed Grafana integrations.
                 * @param req DescribeGrafanaIntegrationsRequest
                 * @return DescribeGrafanaIntegrationsOutcome
                 */
                DescribeGrafanaIntegrationsOutcome DescribeGrafanaIntegrations(const Model::DescribeGrafanaIntegrationsRequest &request);
                void DescribeGrafanaIntegrationsAsync(const Model::DescribeGrafanaIntegrationsRequest& request, const DescribeGrafanaIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaIntegrationsOutcomeCallable DescribeGrafanaIntegrationsCallable(const Model::DescribeGrafanaIntegrationsRequest& request);

                /**
                 *This API is used to list Grafana notification channels.
                 * @param req DescribeGrafanaNotificationChannelsRequest
                 * @return DescribeGrafanaNotificationChannelsOutcome
                 */
                DescribeGrafanaNotificationChannelsOutcome DescribeGrafanaNotificationChannels(const Model::DescribeGrafanaNotificationChannelsRequest &request);
                void DescribeGrafanaNotificationChannelsAsync(const Model::DescribeGrafanaNotificationChannelsRequest& request, const DescribeGrafanaNotificationChannelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaNotificationChannelsOutcomeCallable DescribeGrafanaNotificationChannelsCallable(const Model::DescribeGrafanaNotificationChannelsRequest& request);

                /**
                 *This API is used to list the Grafana allowlist.
                 * @param req DescribeGrafanaWhiteListRequest
                 * @return DescribeGrafanaWhiteListOutcome
                 */
                DescribeGrafanaWhiteListOutcome DescribeGrafanaWhiteList(const Model::DescribeGrafanaWhiteListRequest &request);
                void DescribeGrafanaWhiteListAsync(const Model::DescribeGrafanaWhiteListRequest& request, const DescribeGrafanaWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGrafanaWhiteListOutcomeCallable DescribeGrafanaWhiteListCallable(const Model::DescribeGrafanaWhiteListRequest& request);

                /**
                 *This API is used to list the plugins installed in an instance.
                 * @param req DescribeInstalledPluginsRequest
                 * @return DescribeInstalledPluginsOutcome
                 */
                DescribeInstalledPluginsOutcome DescribeInstalledPlugins(const Model::DescribeInstalledPluginsRequest &request);
                void DescribeInstalledPluginsAsync(const Model::DescribeInstalledPluginsRequest& request, const DescribeInstalledPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstalledPluginsOutcomeCallable DescribeInstalledPluginsCallable(const Model::DescribeInstalledPluginsRequest& request);

                /**
                 *This API is used to list all the monitoring types supported by CM.
                 * @param req DescribeMonitorTypesRequest
                 * @return DescribeMonitorTypesOutcome
                 */
                DescribeMonitorTypesOutcome DescribeMonitorTypes(const Model::DescribeMonitorTypesRequest &request);
                void DescribeMonitorTypesAsync(const Model::DescribeMonitorTypesRequest& request, const DescribeMonitorTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonitorTypesOutcomeCallable DescribeMonitorTypesCallable(const Model::DescribeMonitorTypesRequest& request);

                /**
                 *This API is used to get basic alarm policy conditions.
                 * @param req DescribePolicyConditionListRequest
                 * @return DescribePolicyConditionListOutcome
                 */
                DescribePolicyConditionListOutcome DescribePolicyConditionList(const Model::DescribePolicyConditionListRequest &request);
                void DescribePolicyConditionListAsync(const Model::DescribePolicyConditionListRequest& request, const DescribePolicyConditionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyConditionListOutcomeCallable DescribePolicyConditionListCallable(const Model::DescribePolicyConditionListRequest& request);

                /**
                 *This API is used to get details of a basic policy group.
                 * @param req DescribePolicyGroupInfoRequest
                 * @return DescribePolicyGroupInfoOutcome
                 */
                DescribePolicyGroupInfoOutcome DescribePolicyGroupInfo(const Model::DescribePolicyGroupInfoRequest &request);
                void DescribePolicyGroupInfoAsync(const Model::DescribePolicyGroupInfoRequest& request, const DescribePolicyGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupInfoOutcomeCallable DescribePolicyGroupInfoCallable(const Model::DescribePolicyGroupInfoRequest& request);

                /**
                 *This API is used to get the list of basic policy alarm groups.
                 * @param req DescribePolicyGroupListRequest
                 * @return DescribePolicyGroupListOutcome
                 */
                DescribePolicyGroupListOutcome DescribePolicyGroupList(const Model::DescribePolicyGroupListRequest &request);
                void DescribePolicyGroupListAsync(const Model::DescribePolicyGroupListRequest& request, const DescribePolicyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyGroupListOutcomeCallable DescribePolicyGroupListCallable(const Model::DescribePolicyGroupListRequest& request);

                /**
                 *This API is used to get the list of product events by page.
                 * @param req DescribeProductEventListRequest
                 * @return DescribeProductEventListOutcome
                 */
                DescribeProductEventListOutcome DescribeProductEventList(const Model::DescribeProductEventListRequest &request);
                void DescribeProductEventListAsync(const Model::DescribeProductEventListRequest& request, const DescribeProductEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductEventListOutcomeCallable DescribeProductEventListCallable(const Model::DescribeProductEventListRequest& request);

                /**
                 *This API is used to get the list of instances associated with the target cluster.
                 * @param req DescribePrometheusAgentInstancesRequest
                 * @return DescribePrometheusAgentInstancesOutcome
                 */
                DescribePrometheusAgentInstancesOutcome DescribePrometheusAgentInstances(const Model::DescribePrometheusAgentInstancesRequest &request);
                void DescribePrometheusAgentInstancesAsync(const Model::DescribePrometheusAgentInstancesRequest& request, const DescribePrometheusAgentInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAgentInstancesOutcomeCallable DescribePrometheusAgentInstancesCallable(const Model::DescribePrometheusAgentInstancesRequest& request);

                /**
                 *This API is used to list Prometheus CVM agents.
                 * @param req DescribePrometheusAgentsRequest
                 * @return DescribePrometheusAgentsOutcome
                 */
                DescribePrometheusAgentsOutcome DescribePrometheusAgents(const Model::DescribePrometheusAgentsRequest &request);
                void DescribePrometheusAgentsAsync(const Model::DescribePrometheusAgentsRequest& request, const DescribePrometheusAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAgentsOutcomeCallable DescribePrometheusAgentsCallable(const Model::DescribePrometheusAgentsRequest& request);

                /**
                 *This API is used to query alarm groups under a given prometheus.
                 * @param req DescribePrometheusAlertGroupsRequest
                 * @return DescribePrometheusAlertGroupsOutcome
                 */
                DescribePrometheusAlertGroupsOutcome DescribePrometheusAlertGroups(const Model::DescribePrometheusAlertGroupsRequest &request);
                void DescribePrometheusAlertGroupsAsync(const Model::DescribePrometheusAlertGroupsRequest& request, const DescribePrometheusAlertGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertGroupsOutcomeCallable DescribePrometheusAlertGroupsCallable(const Model::DescribePrometheusAlertGroupsRequest& request);

                /**
                 *This API is used to get the list of v2.0 instance alerting rules.
                 * @param req DescribePrometheusAlertPolicyRequest
                 * @return DescribePrometheusAlertPolicyOutcome
                 */
                DescribePrometheusAlertPolicyOutcome DescribePrometheusAlertPolicy(const Model::DescribePrometheusAlertPolicyRequest &request);
                void DescribePrometheusAlertPolicyAsync(const Model::DescribePrometheusAlertPolicyRequest& request, const DescribePrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusAlertPolicyOutcomeCallable DescribePrometheusAlertPolicyCallable(const Model::DescribePrometheusAlertPolicyRequest& request);

                /**
                 *This API is used to get the list of clusters associated with the TMP instance.
                 * @param req DescribePrometheusClusterAgentsRequest
                 * @return DescribePrometheusClusterAgentsOutcome
                 */
                DescribePrometheusClusterAgentsOutcome DescribePrometheusClusterAgents(const Model::DescribePrometheusClusterAgentsRequest &request);
                void DescribePrometheusClusterAgentsAsync(const Model::DescribePrometheusClusterAgentsRequest& request, const DescribePrometheusClusterAgentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusClusterAgentsOutcomeCallable DescribePrometheusClusterAgentsCallable(const Model::DescribePrometheusClusterAgentsRequest& request);

                /**
                 *This API is used to get the Prometheus configuration.
                 * @param req DescribePrometheusConfigRequest
                 * @return DescribePrometheusConfigOutcome
                 */
                DescribePrometheusConfigOutcome DescribePrometheusConfig(const Model::DescribePrometheusConfigRequest &request);
                void DescribePrometheusConfigAsync(const Model::DescribePrometheusConfigRequest& request, const DescribePrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusConfigOutcomeCallable DescribePrometheusConfigCallable(const Model::DescribePrometheusConfigRequest& request);

                /**
                 *This API is used to get the instance-level scrape configurations.
                 * @param req DescribePrometheusGlobalConfigRequest
                 * @return DescribePrometheusGlobalConfigOutcome
                 */
                DescribePrometheusGlobalConfigOutcome DescribePrometheusGlobalConfig(const Model::DescribePrometheusGlobalConfigRequest &request);
                void DescribePrometheusGlobalConfigAsync(const Model::DescribePrometheusGlobalConfigRequest& request, const DescribePrometheusGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusGlobalConfigOutcomeCallable DescribePrometheusGlobalConfigCallable(const Model::DescribePrometheusGlobalConfigRequest& request);

                /**
                 *This API is used to query the global alert notification channel.
                 * @param req DescribePrometheusGlobalNotificationRequest
                 * @return DescribePrometheusGlobalNotificationOutcome
                 */
                DescribePrometheusGlobalNotificationOutcome DescribePrometheusGlobalNotification(const Model::DescribePrometheusGlobalNotificationRequest &request);
                void DescribePrometheusGlobalNotificationAsync(const Model::DescribePrometheusGlobalNotificationRequest& request, const DescribePrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusGlobalNotificationOutcomeCallable DescribePrometheusGlobalNotificationCallable(const Model::DescribePrometheusGlobalNotificationRequest& request);

                /**
                 *This API is used to get the details of a TMP instance.
                 * @param req DescribePrometheusInstanceDetailRequest
                 * @return DescribePrometheusInstanceDetailOutcome
                 */
                DescribePrometheusInstanceDetailOutcome DescribePrometheusInstanceDetail(const Model::DescribePrometheusInstanceDetailRequest &request);
                void DescribePrometheusInstanceDetailAsync(const Model::DescribePrometheusInstanceDetailRequest& request, const DescribePrometheusInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceDetailOutcomeCallable DescribePrometheusInstanceDetailCallable(const Model::DescribePrometheusInstanceDetailRequest& request);

                /**
                 *This API is used to get the initialization task status of a v2.0 instance.
                 * @param req DescribePrometheusInstanceInitStatusRequest
                 * @return DescribePrometheusInstanceInitStatusOutcome
                 */
                DescribePrometheusInstanceInitStatusOutcome DescribePrometheusInstanceInitStatus(const Model::DescribePrometheusInstanceInitStatusRequest &request);
                void DescribePrometheusInstanceInitStatusAsync(const Model::DescribePrometheusInstanceInitStatusRequest& request, const DescribePrometheusInstanceInitStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceInitStatusOutcomeCallable DescribePrometheusInstanceInitStatusCallable(const Model::DescribePrometheusInstanceInitStatusRequest& request);

                /**
                 * This API is used to query the usage of a pay-as-you-go Tencent Managed Service for Prometheus (TMP) instance.
                 * @param req DescribePrometheusInstanceUsageRequest
                 * @return DescribePrometheusInstanceUsageOutcome
                 */
                DescribePrometheusInstanceUsageOutcome DescribePrometheusInstanceUsage(const Model::DescribePrometheusInstanceUsageRequest &request);
                void DescribePrometheusInstanceUsageAsync(const Model::DescribePrometheusInstanceUsageRequest& request, const DescribePrometheusInstanceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceUsageOutcomeCallable DescribePrometheusInstanceUsageCallable(const Model::DescribePrometheusInstanceUsageRequest& request);

                /**
                 *This API is used to query the details of one or multiple instances.
<ul>
<li>You can query the details of an instance by its ID, name, or status.</li>
<li>If this parameter is empty, the information of a certain number of instances under the current account will be returned. The number is specified by `Limit` and is 20 by default.</li>
</ul>
                 * @param req DescribePrometheusInstancesRequest
                 * @return DescribePrometheusInstancesOutcome
                 */
                DescribePrometheusInstancesOutcome DescribePrometheusInstances(const Model::DescribePrometheusInstancesRequest &request);
                void DescribePrometheusInstancesAsync(const Model::DescribePrometheusInstancesRequest& request, const DescribePrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstancesOutcomeCallable DescribePrometheusInstancesCallable(const Model::DescribePrometheusInstancesRequest& request);

                /**
                 *This API is used to obtain the list of Tencent Managed Service for Prometheus (TMP) instances and the clusters associated with them.
                 * @param req DescribePrometheusInstancesOverviewRequest
                 * @return DescribePrometheusInstancesOverviewOutcome
                 */
                DescribePrometheusInstancesOverviewOutcome DescribePrometheusInstancesOverview(const Model::DescribePrometheusInstancesOverviewRequest &request);
                void DescribePrometheusInstancesOverviewAsync(const Model::DescribePrometheusInstancesOverviewRequest& request, const DescribePrometheusInstancesOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstancesOverviewOutcomeCallable DescribePrometheusInstancesOverviewCallable(const Model::DescribePrometheusInstancesOverviewRequest& request);

                /**
                 *This API is used to get the YAML list of Prometheus recording rules.
                 * @param req DescribePrometheusRecordRuleYamlRequest
                 * @return DescribePrometheusRecordRuleYamlOutcome
                 */
                DescribePrometheusRecordRuleYamlOutcome DescribePrometheusRecordRuleYaml(const Model::DescribePrometheusRecordRuleYamlRequest &request);
                void DescribePrometheusRecordRuleYamlAsync(const Model::DescribePrometheusRecordRuleYamlRequest& request, const DescribePrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusRecordRuleYamlOutcomeCallable DescribePrometheusRecordRuleYamlCallable(const Model::DescribePrometheusRecordRuleYamlRequest& request);

                /**
                 *This API is used to get the list of recording rules, including those created by CRD resources in the associated cluster.
                 * @param req DescribePrometheusRecordRulesRequest
                 * @return DescribePrometheusRecordRulesOutcome
                 */
                DescribePrometheusRecordRulesOutcome DescribePrometheusRecordRules(const Model::DescribePrometheusRecordRulesRequest &request);
                void DescribePrometheusRecordRulesAsync(const Model::DescribePrometheusRecordRulesRequest& request, const DescribePrometheusRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusRecordRulesOutcomeCallable DescribePrometheusRecordRulesCallable(const Model::DescribePrometheusRecordRulesRequest& request);

                /**
                 *This API is used to list Prometheus scrape tasks.
                 * @param req DescribePrometheusScrapeJobsRequest
                 * @return DescribePrometheusScrapeJobsOutcome
                 */
                DescribePrometheusScrapeJobsOutcome DescribePrometheusScrapeJobs(const Model::DescribePrometheusScrapeJobsRequest &request);
                void DescribePrometheusScrapeJobsAsync(const Model::DescribePrometheusScrapeJobsRequest& request, const DescribePrometheusScrapeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusScrapeJobsOutcomeCallable DescribePrometheusScrapeJobsCallable(const Model::DescribePrometheusScrapeJobsRequest& request);

                /**
                 *This API is used to get the targets information.
                 * @param req DescribePrometheusTargetsTMPRequest
                 * @return DescribePrometheusTargetsTMPOutcome
                 */
                DescribePrometheusTargetsTMPOutcome DescribePrometheusTargetsTMP(const Model::DescribePrometheusTargetsTMPRequest &request);
                void DescribePrometheusTargetsTMPAsync(const Model::DescribePrometheusTargetsTMPRequest& request, const DescribePrometheusTargetsTMPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTargetsTMPOutcomeCallable DescribePrometheusTargetsTMPCallable(const Model::DescribePrometheusTargetsTMPRequest& request);

                /**
                 *This API is used to get the list of templates, where the default template is always on top.
                 * @param req DescribePrometheusTempRequest
                 * @return DescribePrometheusTempOutcome
                 */
                DescribePrometheusTempOutcome DescribePrometheusTemp(const Model::DescribePrometheusTempRequest &request);
                void DescribePrometheusTempAsync(const Model::DescribePrometheusTempRequest& request, const DescribePrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTempOutcomeCallable DescribePrometheusTempCallable(const Model::DescribePrometheusTempRequest& request);

                /**
                 *This API is used to get the information of instances associated with a template. It takes effect for v2 instances.
                 * @param req DescribePrometheusTempSyncRequest
                 * @return DescribePrometheusTempSyncOutcome
                 */
                DescribePrometheusTempSyncOutcome DescribePrometheusTempSync(const Model::DescribePrometheusTempSyncRequest &request);
                void DescribePrometheusTempSyncAsync(const Model::DescribePrometheusTempSyncRequest& request, const DescribePrometheusTempSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusTempSyncOutcomeCallable DescribePrometheusTempSyncCallable(const Model::DescribePrometheusTempSyncRequest& request);

                /**
                 *This API is used to list the AZs of Tencent Managed Service for Prometheus (TMP).
                 * @param req DescribePrometheusZonesRequest
                 * @return DescribePrometheusZonesOutcome
                 */
                DescribePrometheusZonesOutcome DescribePrometheusZones(const Model::DescribePrometheusZonesRequest &request);
                void DescribePrometheusZonesAsync(const Model::DescribePrometheusZonesRequest& request, const DescribePrometheusZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusZonesOutcomeCallable DescribePrometheusZonesCallable(const Model::DescribePrometheusZonesRequest& request);

                /**
                 *This API is used to query Prometheus recording rules by filter.
                 * @param req DescribeRecordingRulesRequest
                 * @return DescribeRecordingRulesOutcome
                 */
                DescribeRecordingRulesOutcome DescribeRecordingRules(const Model::DescribeRecordingRulesRequest &request);
                void DescribeRecordingRulesAsync(const Model::DescribeRecordingRulesRequest& request, const DescribeRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRecordingRulesOutcomeCallable DescribeRecordingRulesCallable(const Model::DescribeRecordingRulesRequest& request);

                /**
                 *This API is used to list all authorized accounts of the current Grafana instance.
                 * @param req DescribeSSOAccountRequest
                 * @return DescribeSSOAccountOutcome
                 */
                DescribeSSOAccountOutcome DescribeSSOAccount(const Model::DescribeSSOAccountRequest &request);
                void DescribeSSOAccountAsync(const Model::DescribeSSOAccountRequest& request, const DescribeSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSSOAccountOutcomeCallable DescribeSSOAccountCallable(const Model::DescribeSSOAccountRequest& request);

                /**
                 *This API is used to list Prometheus scrape configurations in TKE.
<p>Note: The prerequisite is that the corresponding TKE service has been integrated through the Prometheus console. For more information, see
<a href="https://intl.cloud.tencent.com/document/product/248/48859?from_cn_redirect=1" target="_blank">Agent Management</a>.</p>
                 * @param req DescribeServiceDiscoveryRequest
                 * @return DescribeServiceDiscoveryOutcome
                 */
                DescribeServiceDiscoveryOutcome DescribeServiceDiscovery(const Model::DescribeServiceDiscoveryRequest &request);
                void DescribeServiceDiscoveryAsync(const Model::DescribeServiceDiscoveryRequest& request, const DescribeServiceDiscoveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceDiscoveryOutcomeCallable DescribeServiceDiscoveryCallable(const Model::DescribeServiceDiscoveryRequest& request);

                /**
                 *This API is used to query monitoring data by dimension conditions.
                 * @param req DescribeStatisticDataRequest
                 * @return DescribeStatisticDataOutcome
                 */
                DescribeStatisticDataOutcome DescribeStatisticData(const Model::DescribeStatisticDataRequest &request);
                void DescribeStatisticDataAsync(const Model::DescribeStatisticDataRequest& request, const DescribeStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatisticDataOutcomeCallable DescribeStatisticDataCallable(const Model::DescribeStatisticDataRequest& request);

                /**
                 *This API is used to delete the data of a Prometheus instance. The specified instance must be terminated first.
                 * @param req DestroyPrometheusInstanceRequest
                 * @return DestroyPrometheusInstanceOutcome
                 */
                DestroyPrometheusInstanceOutcome DestroyPrometheusInstance(const Model::DestroyPrometheusInstanceRequest &request);
                void DestroyPrometheusInstanceAsync(const Model::DestroyPrometheusInstanceRequest& request, const DestroyPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPrometheusInstanceOutcomeCallable DestroyPrometheusInstanceCallable(const Model::DestroyPrometheusInstanceRequest& request);

                /**
                 *This API is used to set the Grafana public network access.
                 * @param req EnableGrafanaInternetRequest
                 * @return EnableGrafanaInternetOutcome
                 */
                EnableGrafanaInternetOutcome EnableGrafanaInternet(const Model::EnableGrafanaInternetRequest &request);
                void EnableGrafanaInternetAsync(const Model::EnableGrafanaInternetRequest& request, const EnableGrafanaInternetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGrafanaInternetOutcomeCallable EnableGrafanaInternetCallable(const Model::EnableGrafanaInternetRequest& request);

                /**
                 *This API is used to set the Grafana SSO through a Tencent Cloud account.
                 * @param req EnableGrafanaSSORequest
                 * @return EnableGrafanaSSOOutcome
                 */
                EnableGrafanaSSOOutcome EnableGrafanaSSO(const Model::EnableGrafanaSSORequest &request);
                void EnableGrafanaSSOAsync(const Model::EnableGrafanaSSORequest& request, const EnableGrafanaSSOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGrafanaSSOOutcomeCallable EnableGrafanaSSOCallable(const Model::EnableGrafanaSSORequest& request);

                /**
                 *This API is used to set whether to enable CAM authentication during SSO.
                 * @param req EnableSSOCamCheckRequest
                 * @return EnableSSOCamCheckOutcome
                 */
                EnableSSOCamCheckOutcome EnableSSOCamCheck(const Model::EnableSSOCamCheckRequest &request);
                void EnableSSOCamCheckAsync(const Model::EnableSSOCamCheckRequest& request, const EnableSSOCamCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableSSOCamCheckOutcomeCallable EnableSSOCamCheckCallable(const Model::EnableSSOCamCheckRequest& request);

                /**
                 *This API is used to get the monitoring data of Tencent Cloud services except TKE. To pull TKE’s monitoring data, use the [DescribeStatisticData](https://www.tencentcloud.com/document/product/248/39481) API.
You can get the monitoring data of a Tencent Cloud service by passing in its namespace, object dimension description, and monitoring metrics.
API call rate limit: 20 calls/second (1,200 calls/minute). A single request can get the data of up to 10 instances for up to 1,440 data points.
If you need to call a large number of APIs to pull metrics or objects at a time, some APIs may fail to be called due to the rate limit. We suggest you evenly arrange API calls at a time granularity.

                 * @param req GetMonitorDataRequest
                 * @return GetMonitorDataOutcome
                 */
                GetMonitorDataOutcome GetMonitorData(const Model::GetMonitorDataRequest &request);
                void GetMonitorDataAsync(const Model::GetMonitorDataRequest& request, const GetMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetMonitorDataOutcomeCallable GetMonitorDataCallable(const Model::GetMonitorDataRequest& request);

                /**
                 *This API is used to get the command line for Prometheus agent management.
                 * @param req GetPrometheusAgentManagementCommandRequest
                 * @return GetPrometheusAgentManagementCommandOutcome
                 */
                GetPrometheusAgentManagementCommandOutcome GetPrometheusAgentManagementCommand(const Model::GetPrometheusAgentManagementCommandRequest &request);
                void GetPrometheusAgentManagementCommandAsync(const Model::GetPrometheusAgentManagementCommandRequest& request, const GetPrometheusAgentManagementCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPrometheusAgentManagementCommandOutcomeCallable GetPrometheusAgentManagementCommandCallable(const Model::GetPrometheusAgentManagementCommandRequest& request);

                /**
                 *This API is used to install a Grafana plugin.
                 * @param req InstallPluginsRequest
                 * @return InstallPluginsOutcome
                 */
                InstallPluginsOutcome InstallPlugins(const Model::InstallPluginsRequest &request);
                void InstallPluginsAsync(const Model::InstallPluginsRequest& request, const InstallPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallPluginsOutcomeCallable InstallPluginsCallable(const Model::InstallPluginsRequest& request);

                /**
                 *This API is used to edit an alarm notification template.
                 * @param req ModifyAlarmNoticeRequest
                 * @return ModifyAlarmNoticeOutcome
                 */
                ModifyAlarmNoticeOutcome ModifyAlarmNotice(const Model::ModifyAlarmNoticeRequest &request);
                void ModifyAlarmNoticeAsync(const Model::ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmNoticeOutcomeCallable ModifyAlarmNoticeCallable(const Model::ModifyAlarmNoticeRequest& request);

                /**
                 *This API is used to modify the trigger condition of an alarm policy.
                 * @param req ModifyAlarmPolicyConditionRequest
                 * @return ModifyAlarmPolicyConditionOutcome
                 */
                ModifyAlarmPolicyConditionOutcome ModifyAlarmPolicyCondition(const Model::ModifyAlarmPolicyConditionRequest &request);
                void ModifyAlarmPolicyConditionAsync(const Model::ModifyAlarmPolicyConditionRequest& request, const ModifyAlarmPolicyConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyConditionOutcomeCallable ModifyAlarmPolicyConditionCallable(const Model::ModifyAlarmPolicyConditionRequest& request);

                /**
                 *This API is used to edit the basic information of a v2.0 alarm policy, including policy name and remarks.
                 * @param req ModifyAlarmPolicyInfoRequest
                 * @return ModifyAlarmPolicyInfoOutcome
                 */
                ModifyAlarmPolicyInfoOutcome ModifyAlarmPolicyInfo(const Model::ModifyAlarmPolicyInfoRequest &request);
                void ModifyAlarmPolicyInfoAsync(const Model::ModifyAlarmPolicyInfoRequest& request, const ModifyAlarmPolicyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyInfoOutcomeCallable ModifyAlarmPolicyInfoCallable(const Model::ModifyAlarmPolicyInfoRequest& request);

                /**
                 *This API is used to modify the alarm notification template bound to an alarm policy.
                 * @param req ModifyAlarmPolicyNoticeRequest
                 * @return ModifyAlarmPolicyNoticeOutcome
                 */
                ModifyAlarmPolicyNoticeOutcome ModifyAlarmPolicyNotice(const Model::ModifyAlarmPolicyNoticeRequest &request);
                void ModifyAlarmPolicyNoticeAsync(const Model::ModifyAlarmPolicyNoticeRequest& request, const ModifyAlarmPolicyNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyNoticeOutcomeCallable ModifyAlarmPolicyNoticeCallable(const Model::ModifyAlarmPolicyNoticeRequest& request);

                /**
                 *This API is used to enable/disable an alarm policy.
                 * @param req ModifyAlarmPolicyStatusRequest
                 * @return ModifyAlarmPolicyStatusOutcome
                 */
                ModifyAlarmPolicyStatusOutcome ModifyAlarmPolicyStatus(const Model::ModifyAlarmPolicyStatusRequest &request);
                void ModifyAlarmPolicyStatusAsync(const Model::ModifyAlarmPolicyStatusRequest& request, const ModifyAlarmPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyStatusOutcomeCallable ModifyAlarmPolicyStatusCallable(const Model::ModifyAlarmPolicyStatusRequest& request);

                /**
                 *This API is used to modify the tasks triggered by alarm policy, which are listed by the value of the `TriggerTasks` field. If an empty array is passed in for `TriggerTasks`, it means unbinding all the trigger tasks from the policy.
                 * @param req ModifyAlarmPolicyTasksRequest
                 * @return ModifyAlarmPolicyTasksOutcome
                 */
                ModifyAlarmPolicyTasksOutcome ModifyAlarmPolicyTasks(const Model::ModifyAlarmPolicyTasksRequest &request);
                void ModifyAlarmPolicyTasksAsync(const Model::ModifyAlarmPolicyTasksRequest& request, const ModifyAlarmPolicyTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmPolicyTasksOutcomeCallable ModifyAlarmPolicyTasksCallable(const Model::ModifyAlarmPolicyTasksRequest& request);

                /**
                 *This API is used to modify alarm recipients.
                 * @param req ModifyAlarmReceiversRequest
                 * @return ModifyAlarmReceiversOutcome
                 */
                ModifyAlarmReceiversOutcome ModifyAlarmReceivers(const Model::ModifyAlarmReceiversRequest &request);
                void ModifyAlarmReceiversAsync(const Model::ModifyAlarmReceiversRequest& request, const ModifyAlarmReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAlarmReceiversOutcomeCallable ModifyAlarmReceiversCallable(const Model::ModifyAlarmReceiversRequest& request);

                /**
                 *This API is used to modify the attributes of a Grafana instance.
                 * @param req ModifyGrafanaInstanceRequest
                 * @return ModifyGrafanaInstanceOutcome
                 */
                ModifyGrafanaInstanceOutcome ModifyGrafanaInstance(const Model::ModifyGrafanaInstanceRequest &request);
                void ModifyGrafanaInstanceAsync(const Model::ModifyGrafanaInstanceRequest& request, const ModifyGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGrafanaInstanceOutcomeCallable ModifyGrafanaInstanceCallable(const Model::ModifyGrafanaInstanceRequest& request);

                /**
                 *This API is used to update policy group.
                 * @param req ModifyPolicyGroupRequest
                 * @return ModifyPolicyGroupOutcome
                 */
                ModifyPolicyGroupOutcome ModifyPolicyGroup(const Model::ModifyPolicyGroupRequest &request);
                void ModifyPolicyGroupAsync(const Model::ModifyPolicyGroupRequest& request, const ModifyPolicyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPolicyGroupOutcomeCallable ModifyPolicyGroupCallable(const Model::ModifyPolicyGroupRequest& request);

                /**
                 *This API is used to modify the external labels of the associated cluster.
                 * @param req ModifyPrometheusAgentExternalLabelsRequest
                 * @return ModifyPrometheusAgentExternalLabelsOutcome
                 */
                ModifyPrometheusAgentExternalLabelsOutcome ModifyPrometheusAgentExternalLabels(const Model::ModifyPrometheusAgentExternalLabelsRequest &request);
                void ModifyPrometheusAgentExternalLabelsAsync(const Model::ModifyPrometheusAgentExternalLabelsRequest& request, const ModifyPrometheusAgentExternalLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAgentExternalLabelsOutcomeCallable ModifyPrometheusAgentExternalLabelsCallable(const Model::ModifyPrometheusAgentExternalLabelsRequest& request);

                /**
                 *This API is used to modify a TMP 2.0 instance alerting rule.
                 * @param req ModifyPrometheusAlertPolicyRequest
                 * @return ModifyPrometheusAlertPolicyOutcome
                 */
                ModifyPrometheusAlertPolicyOutcome ModifyPrometheusAlertPolicy(const Model::ModifyPrometheusAlertPolicyRequest &request);
                void ModifyPrometheusAlertPolicyAsync(const Model::ModifyPrometheusAlertPolicyRequest& request, const ModifyPrometheusAlertPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAlertPolicyOutcomeCallable ModifyPrometheusAlertPolicyCallable(const Model::ModifyPrometheusAlertPolicyRequest& request);

                /**
                 *This API is used to modify the Prometheus configuration. If there are no configuration items, one will be added.
                 * @param req ModifyPrometheusConfigRequest
                 * @return ModifyPrometheusConfigOutcome
                 */
                ModifyPrometheusConfigOutcome ModifyPrometheusConfig(const Model::ModifyPrometheusConfigRequest &request);
                void ModifyPrometheusConfigAsync(const Model::ModifyPrometheusConfigRequest& request, const ModifyPrometheusConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusConfigOutcomeCallable ModifyPrometheusConfigCallable(const Model::ModifyPrometheusConfigRequest& request);

                /**
                 *This API is used to modify the global alert notification channel.
                 * @param req ModifyPrometheusGlobalNotificationRequest
                 * @return ModifyPrometheusGlobalNotificationOutcome
                 */
                ModifyPrometheusGlobalNotificationOutcome ModifyPrometheusGlobalNotification(const Model::ModifyPrometheusGlobalNotificationRequest &request);
                void ModifyPrometheusGlobalNotificationAsync(const Model::ModifyPrometheusGlobalNotificationRequest& request, const ModifyPrometheusGlobalNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusGlobalNotificationOutcomeCallable ModifyPrometheusGlobalNotificationCallable(const Model::ModifyPrometheusGlobalNotificationRequest& request);

                /**
                 *This API is used to modify the attributes of a Prometheus instance.
                 * @param req ModifyPrometheusInstanceAttributesRequest
                 * @return ModifyPrometheusInstanceAttributesOutcome
                 */
                ModifyPrometheusInstanceAttributesOutcome ModifyPrometheusInstanceAttributes(const Model::ModifyPrometheusInstanceAttributesRequest &request);
                void ModifyPrometheusInstanceAttributesAsync(const Model::ModifyPrometheusInstanceAttributesRequest& request, const ModifyPrometheusInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusInstanceAttributesOutcomeCallable ModifyPrometheusInstanceAttributesCallable(const Model::ModifyPrometheusInstanceAttributesRequest& request);

                /**
                 *This API is used to modify a Prometheus recording instance through YAML.
                 * @param req ModifyPrometheusRecordRuleYamlRequest
                 * @return ModifyPrometheusRecordRuleYamlOutcome
                 */
                ModifyPrometheusRecordRuleYamlOutcome ModifyPrometheusRecordRuleYaml(const Model::ModifyPrometheusRecordRuleYamlRequest &request);
                void ModifyPrometheusRecordRuleYamlAsync(const Model::ModifyPrometheusRecordRuleYamlRequest& request, const ModifyPrometheusRecordRuleYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusRecordRuleYamlOutcomeCallable ModifyPrometheusRecordRuleYamlCallable(const Model::ModifyPrometheusRecordRuleYamlRequest& request);

                /**
                 *This API is used to modify a template.
                 * @param req ModifyPrometheusTempRequest
                 * @return ModifyPrometheusTempOutcome
                 */
                ModifyPrometheusTempOutcome ModifyPrometheusTemp(const Model::ModifyPrometheusTempRequest &request);
                void ModifyPrometheusTempAsync(const Model::ModifyPrometheusTempRequest& request, const ModifyPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusTempOutcomeCallable ModifyPrometheusTempCallable(const Model::ModifyPrometheusTempRequest& request);

                /**
                 *This API is used to renew a monthly subscribed TCMG instance for a month without changing the instance edition. It doesn't apply to running instances.
                 * @param req ResumeGrafanaInstanceRequest
                 * @return ResumeGrafanaInstanceOutcome
                 */
                ResumeGrafanaInstanceOutcome ResumeGrafanaInstance(const Model::ResumeGrafanaInstanceRequest &request);
                void ResumeGrafanaInstanceAsync(const Model::ResumeGrafanaInstanceRequest& request, const ResumeGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeGrafanaInstanceOutcomeCallable ResumeGrafanaInstanceCallable(const Model::ResumeGrafanaInstanceRequest& request);

                /**
                 *This API is used to initialize a TMP instance, which is called when the integration center is enabled.
                 * @param req RunPrometheusInstanceRequest
                 * @return RunPrometheusInstanceOutcome
                 */
                RunPrometheusInstanceOutcome RunPrometheusInstance(const Model::RunPrometheusInstanceRequest &request);
                void RunPrometheusInstanceAsync(const Model::RunPrometheusInstanceRequest& request, const RunPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunPrometheusInstanceOutcomeCallable RunPrometheusInstanceCallable(const Model::RunPrometheusInstanceRequest& request);

                /**
                 *This API is used to send a custom alarm notification.
                 * @param req SendCustomAlarmMsgRequest
                 * @return SendCustomAlarmMsgOutcome
                 */
                SendCustomAlarmMsgOutcome SendCustomAlarmMsg(const Model::SendCustomAlarmMsgRequest &request);
                void SendCustomAlarmMsgAsync(const Model::SendCustomAlarmMsgRequest& request, const SendCustomAlarmMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendCustomAlarmMsgOutcomeCallable SendCustomAlarmMsgCallable(const Model::SendCustomAlarmMsgRequest& request);

                /**
                 *This API is used to set an alarm policy as the default policy in the current policy type under the current project.
Alarm policies in the same type under the project will be set as non-default.
                 * @param req SetDefaultAlarmPolicyRequest
                 * @return SetDefaultAlarmPolicyOutcome
                 */
                SetDefaultAlarmPolicyOutcome SetDefaultAlarmPolicy(const Model::SetDefaultAlarmPolicyRequest &request);
                void SetDefaultAlarmPolicyAsync(const Model::SetDefaultAlarmPolicyRequest& request, const SetDefaultAlarmPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetDefaultAlarmPolicyOutcomeCallable SetDefaultAlarmPolicyCallable(const Model::SetDefaultAlarmPolicyRequest& request);

                /**
                 *This API is used to sync a template to an instance or cluster. It takes effect for v2 instances.
                 * @param req SyncPrometheusTempRequest
                 * @return SyncPrometheusTempOutcome
                 */
                SyncPrometheusTempOutcome SyncPrometheusTemp(const Model::SyncPrometheusTempRequest &request);
                void SyncPrometheusTempAsync(const Model::SyncPrometheusTempRequest& request, const SyncPrometheusTempAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncPrometheusTempOutcomeCallable SyncPrometheusTempCallable(const Model::SyncPrometheusTempRequest& request);

                /**
                 *This API is used to terminate a pay-as-you-go Prometheus instance.
                 * @param req TerminatePrometheusInstancesRequest
                 * @return TerminatePrometheusInstancesOutcome
                 */
                TerminatePrometheusInstancesOutcome TerminatePrometheusInstances(const Model::TerminatePrometheusInstancesRequest &request);
                void TerminatePrometheusInstancesAsync(const Model::TerminatePrometheusInstancesRequest& request, const TerminatePrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminatePrometheusInstancesOutcomeCallable TerminatePrometheusInstancesCallable(const Model::TerminatePrometheusInstancesRequest& request);

                /**
                 *This API is used to delete all bound objects.
                 * @param req UnBindingAllPolicyObjectRequest
                 * @return UnBindingAllPolicyObjectOutcome
                 */
                UnBindingAllPolicyObjectOutcome UnBindingAllPolicyObject(const Model::UnBindingAllPolicyObjectRequest &request);
                void UnBindingAllPolicyObjectAsync(const Model::UnBindingAllPolicyObjectRequest& request, const UnBindingAllPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingAllPolicyObjectOutcomeCallable UnBindingAllPolicyObjectCallable(const Model::UnBindingAllPolicyObjectRequest& request);

                /**
                 *This API is used to delete an object that is bound to a policy.
                 * @param req UnBindingPolicyObjectRequest
                 * @return UnBindingPolicyObjectOutcome
                 */
                UnBindingPolicyObjectOutcome UnBindingPolicyObject(const Model::UnBindingPolicyObjectRequest &request);
                void UnBindingPolicyObjectAsync(const Model::UnBindingPolicyObjectRequest& request, const UnBindingPolicyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindingPolicyObjectOutcomeCallable UnBindingPolicyObjectCallable(const Model::UnBindingPolicyObjectRequest& request);

                /**
                 *This API is used to unbind a Grafana instance from an instance.
                 * @param req UnbindPrometheusManagedGrafanaRequest
                 * @return UnbindPrometheusManagedGrafanaOutcome
                 */
                UnbindPrometheusManagedGrafanaOutcome UnbindPrometheusManagedGrafana(const Model::UnbindPrometheusManagedGrafanaRequest &request);
                void UnbindPrometheusManagedGrafanaAsync(const Model::UnbindPrometheusManagedGrafanaRequest& request, const UnbindPrometheusManagedGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindPrometheusManagedGrafanaOutcomeCallable UnbindPrometheusManagedGrafanaCallable(const Model::UnbindPrometheusManagedGrafanaRequest& request);

                /**
                 *This API is used to delete a Grafana dashboard.
                 * @param req UninstallGrafanaDashboardRequest
                 * @return UninstallGrafanaDashboardOutcome
                 */
                UninstallGrafanaDashboardOutcome UninstallGrafanaDashboard(const Model::UninstallGrafanaDashboardRequest &request);
                void UninstallGrafanaDashboardAsync(const Model::UninstallGrafanaDashboardRequest& request, const UninstallGrafanaDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallGrafanaDashboardOutcomeCallable UninstallGrafanaDashboardCallable(const Model::UninstallGrafanaDashboardRequest& request);

                /**
                 *This API is used to delete installed plugins.
                 * @param req UninstallGrafanaPluginsRequest
                 * @return UninstallGrafanaPluginsOutcome
                 */
                UninstallGrafanaPluginsOutcome UninstallGrafanaPlugins(const Model::UninstallGrafanaPluginsRequest &request);
                void UninstallGrafanaPluginsAsync(const Model::UninstallGrafanaPluginsRequest& request, const UninstallGrafanaPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallGrafanaPluginsOutcomeCallable UninstallGrafanaPluginsCallable(const Model::UninstallGrafanaPluginsRequest& request);

                /**
                 *This API is used to update a Prometheus alerting rule.

Note that alert object and alert message are special fields of Prometheus Rule Annotations, which need to be passed in through `annotations` and correspond to `summary` and `description` keys respectively. For more information, see [Alerting rules](https://prometheus.io/docs/prometheus/latest/configuration/alerting_rules/).
                 * @param req UpdateAlertRuleRequest
                 * @return UpdateAlertRuleOutcome
                 */
                UpdateAlertRuleOutcome UpdateAlertRule(const Model::UpdateAlertRuleRequest &request);
                void UpdateAlertRuleAsync(const Model::UpdateAlertRuleRequest& request, const UpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertRuleOutcomeCallable UpdateAlertRuleCallable(const Model::UpdateAlertRuleRequest& request);

                /**
                 *This API is used to update the status of a Prometheus alerting rule.
                 * @param req UpdateAlertRuleStateRequest
                 * @return UpdateAlertRuleStateOutcome
                 */
                UpdateAlertRuleStateOutcome UpdateAlertRuleState(const Model::UpdateAlertRuleStateRequest &request);
                void UpdateAlertRuleStateAsync(const Model::UpdateAlertRuleStateRequest& request, const UpdateAlertRuleStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAlertRuleStateOutcomeCallable UpdateAlertRuleStateCallable(const Model::UpdateAlertRuleStateRequest& request);

                /**
                 *This API is used to update the Grafana DNS configuration.
                 * @param req UpdateDNSConfigRequest
                 * @return UpdateDNSConfigOutcome
                 */
                UpdateDNSConfigOutcome UpdateDNSConfig(const Model::UpdateDNSConfigRequest &request);
                void UpdateDNSConfigAsync(const Model::UpdateDNSConfigRequest& request, const UpdateDNSConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDNSConfigOutcomeCallable UpdateDNSConfigCallable(const Model::UpdateDNSConfigRequest& request);

                /**
                 *This API is used to update the exporter integration configuration.
                 * @param req UpdateExporterIntegrationRequest
                 * @return UpdateExporterIntegrationOutcome
                 */
                UpdateExporterIntegrationOutcome UpdateExporterIntegration(const Model::UpdateExporterIntegrationRequest &request);
                void UpdateExporterIntegrationAsync(const Model::UpdateExporterIntegrationRequest& request, const UpdateExporterIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateExporterIntegrationOutcomeCallable UpdateExporterIntegrationCallable(const Model::UpdateExporterIntegrationRequest& request);

                /**
                 *This API is used to update the Grafana configuration.
                 * @param req UpdateGrafanaConfigRequest
                 * @return UpdateGrafanaConfigOutcome
                 */
                UpdateGrafanaConfigOutcome UpdateGrafanaConfig(const Model::UpdateGrafanaConfigRequest &request);
                void UpdateGrafanaConfigAsync(const Model::UpdateGrafanaConfigRequest& request, const UpdateGrafanaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaConfigOutcomeCallable UpdateGrafanaConfigCallable(const Model::UpdateGrafanaConfigRequest& request);

                /**
                 *This API is used to update Grafana environment variables.
                 * @param req UpdateGrafanaEnvironmentsRequest
                 * @return UpdateGrafanaEnvironmentsOutcome
                 */
                UpdateGrafanaEnvironmentsOutcome UpdateGrafanaEnvironments(const Model::UpdateGrafanaEnvironmentsRequest &request);
                void UpdateGrafanaEnvironmentsAsync(const Model::UpdateGrafanaEnvironmentsRequest& request, const UpdateGrafanaEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaEnvironmentsOutcomeCallable UpdateGrafanaEnvironmentsCallable(const Model::UpdateGrafanaEnvironmentsRequest& request);

                /**
                 *This API is used to update the Grafana integration configuration.
                 * @param req UpdateGrafanaIntegrationRequest
                 * @return UpdateGrafanaIntegrationOutcome
                 */
                UpdateGrafanaIntegrationOutcome UpdateGrafanaIntegration(const Model::UpdateGrafanaIntegrationRequest &request);
                void UpdateGrafanaIntegrationAsync(const Model::UpdateGrafanaIntegrationRequest& request, const UpdateGrafanaIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaIntegrationOutcomeCallable UpdateGrafanaIntegrationCallable(const Model::UpdateGrafanaIntegrationRequest& request);

                /**
                 *This API is used to update the Grafana notification channel.
                 * @param req UpdateGrafanaNotificationChannelRequest
                 * @return UpdateGrafanaNotificationChannelOutcome
                 */
                UpdateGrafanaNotificationChannelOutcome UpdateGrafanaNotificationChannel(const Model::UpdateGrafanaNotificationChannelRequest &request);
                void UpdateGrafanaNotificationChannelAsync(const Model::UpdateGrafanaNotificationChannelRequest& request, const UpdateGrafanaNotificationChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaNotificationChannelOutcomeCallable UpdateGrafanaNotificationChannelCallable(const Model::UpdateGrafanaNotificationChannelRequest& request);

                /**
                 *This API is used to update the Grafana allowlist.
                 * @param req UpdateGrafanaWhiteListRequest
                 * @return UpdateGrafanaWhiteListOutcome
                 */
                UpdateGrafanaWhiteListOutcome UpdateGrafanaWhiteList(const Model::UpdateGrafanaWhiteListRequest &request);
                void UpdateGrafanaWhiteListAsync(const Model::UpdateGrafanaWhiteListRequest& request, const UpdateGrafanaWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateGrafanaWhiteListOutcomeCallable UpdateGrafanaWhiteListCallable(const Model::UpdateGrafanaWhiteListRequest& request);

                /**
                 *This API is used to update the status of a Prometheus CVM agent.
                 * @param req UpdatePrometheusAgentStatusRequest
                 * @return UpdatePrometheusAgentStatusOutcome
                 */
                UpdatePrometheusAgentStatusOutcome UpdatePrometheusAgentStatus(const Model::UpdatePrometheusAgentStatusRequest &request);
                void UpdatePrometheusAgentStatusAsync(const Model::UpdatePrometheusAgentStatusRequest& request, const UpdatePrometheusAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusAgentStatusOutcomeCallable UpdatePrometheusAgentStatusCallable(const Model::UpdatePrometheusAgentStatusRequest& request);

                /**
                 *This API is used to update Prometheus alert rule groups.
                 * @param req UpdatePrometheusAlertGroupRequest
                 * @return UpdatePrometheusAlertGroupOutcome
                 */
                UpdatePrometheusAlertGroupOutcome UpdatePrometheusAlertGroup(const Model::UpdatePrometheusAlertGroupRequest &request);
                void UpdatePrometheusAlertGroupAsync(const Model::UpdatePrometheusAlertGroupRequest& request, const UpdatePrometheusAlertGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusAlertGroupOutcomeCallable UpdatePrometheusAlertGroupCallable(const Model::UpdatePrometheusAlertGroupRequest& request);

                /**
                 *This API is used to batch update the status of alarm groups and set all rules grouped in them to the target status.
                 * @param req UpdatePrometheusAlertGroupStateRequest
                 * @return UpdatePrometheusAlertGroupStateOutcome
                 */
                UpdatePrometheusAlertGroupStateOutcome UpdatePrometheusAlertGroupState(const Model::UpdatePrometheusAlertGroupStateRequest &request);
                void UpdatePrometheusAlertGroupStateAsync(const Model::UpdatePrometheusAlertGroupStateRequest& request, const UpdatePrometheusAlertGroupStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusAlertGroupStateOutcomeCallable UpdatePrometheusAlertGroupStateCallable(const Model::UpdatePrometheusAlertGroupStateRequest& request);

                /**
                 *This API is used to update a Prometheus scrape task.
                 * @param req UpdatePrometheusScrapeJobRequest
                 * @return UpdatePrometheusScrapeJobOutcome
                 */
                UpdatePrometheusScrapeJobOutcome UpdatePrometheusScrapeJob(const Model::UpdatePrometheusScrapeJobRequest &request);
                void UpdatePrometheusScrapeJobAsync(const Model::UpdatePrometheusScrapeJobRequest& request, const UpdatePrometheusScrapeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdatePrometheusScrapeJobOutcomeCallable UpdatePrometheusScrapeJobCallable(const Model::UpdatePrometheusScrapeJobRequest& request);

                /**
                 *This API is used to update a Prometheus recording rule.
                 * @param req UpdateRecordingRuleRequest
                 * @return UpdateRecordingRuleOutcome
                 */
                UpdateRecordingRuleOutcome UpdateRecordingRule(const Model::UpdateRecordingRuleRequest &request);
                void UpdateRecordingRuleAsync(const Model::UpdateRecordingRuleRequest& request, const UpdateRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateRecordingRuleOutcomeCallable UpdateRecordingRuleCallable(const Model::UpdateRecordingRuleRequest& request);

                /**
                 *This API is used to update the remarks and permission information of an authorized account in an overwriting manner.
                 * @param req UpdateSSOAccountRequest
                 * @return UpdateSSOAccountOutcome
                 */
                UpdateSSOAccountOutcome UpdateSSOAccount(const Model::UpdateSSOAccountRequest &request);
                void UpdateSSOAccountAsync(const Model::UpdateSSOAccountRequest& request, const UpdateSSOAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateSSOAccountOutcomeCallable UpdateSSOAccountCallable(const Model::UpdateSSOAccountRequest& request);

                /**
                 *This API is used to update a Grafana dashboard.
                 * @param req UpgradeGrafanaDashboardRequest
                 * @return UpgradeGrafanaDashboardOutcome
                 */
                UpgradeGrafanaDashboardOutcome UpgradeGrafanaDashboard(const Model::UpgradeGrafanaDashboardRequest &request);
                void UpgradeGrafanaDashboardAsync(const Model::UpgradeGrafanaDashboardRequest& request, const UpgradeGrafanaDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeGrafanaDashboardOutcomeCallable UpgradeGrafanaDashboardCallable(const Model::UpgradeGrafanaDashboardRequest& request);

                /**
                 *This API is used to upgrade a Grafana instance.
                 * @param req UpgradeGrafanaInstanceRequest
                 * @return UpgradeGrafanaInstanceOutcome
                 */
                UpgradeGrafanaInstanceOutcome UpgradeGrafanaInstance(const Model::UpgradeGrafanaInstanceRequest &request);
                void UpgradeGrafanaInstanceAsync(const Model::UpgradeGrafanaInstanceRequest& request, const UpgradeGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeGrafanaInstanceOutcomeCallable UpgradeGrafanaInstanceCallable(const Model::UpgradeGrafanaInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MONITORCLIENT_H_
